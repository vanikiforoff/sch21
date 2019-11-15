/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 19:07:02 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 22:55:43 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

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

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int n;

	if (!ft_str_is_printable(base))
		return ;
	if (ft_lenstr(base) < 2)
		return ;
	if (!ft_is_double(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		n = (unsigned int)(((long)nbr) * -1);
	}
	else
		n = (unsigned int)nbr;
	if (n / ft_lenstr(base) == 0)
	{
		ft_putchar(base[n % ft_lenstr(base)]);
	}
	else
	{
		ft_putnbr_base(n / ft_lenstr(base), base);
		ft_putchar(base[n % ft_lenstr(base)]);
	}
}
