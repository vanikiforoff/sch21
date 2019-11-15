/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 22:13:59 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 22:56:04 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_printable(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (((*(str + i) < 32) || (*(str + i) > 126)) ||
			(*(str + i) == '+') || (*(str + i) == '-'))
			return (0);
		i++;
	}
	return (1);
}

int		ft_lenstr(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_is_double(char *str)
{
	int i;
	int j;

	i = 0;
	while (i < ft_lenstr(str) - 1)
	{
		j = i + 1;
		while (j < ft_lenstr(str))
		{
			if (*(str + i) == *(str + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		ft_nb(char *str, int start, int sign, char *base)
{
	int nb;
	int i;
	int flag;

	nb = 0;
	while (*(str + start) != '\0')
	{
		i = 0;
		flag = 0;
		while (*(base + i) != '\0')
		{
			if (*(str + start) == *(base + i))
			{
				flag = 1;
				break ;
			}
			i++;
		}
		if (!flag)
			break ;
		nb = nb * ft_lenstr(base) + sign * i;
		start++;
	}
	return (nb);
}

int		ft_atoi_base(char *str, char *base)
{
	int start;
	int sign;

	if (!ft_str_is_printable(base))
		return (0);
	if (ft_lenstr(base) < 2)
		return (0);
	if (!ft_is_double(base))
		return (0);
	start = 0;
	sign = 1;
	while ((*(str + start) == ' ') || (*(str + start) == '\t') ||
			(*(str + start) == '\n') || (*(str + start) == '\v') ||
			(*(str + start) == '\f') || (*(str + start) == '\r'))
	{
		start++;
	}
	if ((*(str + start) == '-') || (*(str + start) == '+'))
	{
		if (*(str + start) == '-')
			sign = -1;
		start++;
	}
	return (ft_nb(str, start, sign, base));
}
