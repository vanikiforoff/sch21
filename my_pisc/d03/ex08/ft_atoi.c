/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/07 22:12:02 by sslift            #+#    #+#             */
/*   Updated: 2019/06/07 23:39:51 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_int(char *str, int start, int finish)
{
	int d;
	int res;
	int j;
	int i;

	res = 0;
	if (start != finish)
	{
		d = 1;
		i = finish - 1;
		while (i >= start)
		{
			j = *(str + i) - '0';
			res += d * j;
			i--;
			d *= 10;
		}
	}
	else
		res = 0;
	return (res);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		i++;
	}
	return (i);
}

int		ft_atoi(char *str)
{
	int start;
	int sign;
	int finish;
	int answ;

	answ = 1;
	sign = 1;
	if (*str == '-')
		sign = -1;
	start = (*str == '-') ? 1 : 0;
	while (((*(str + start) == '0') || (*(str + start) == ' ')))
	{
		start++;
	}
	finish = start;
	while (((*(str + finish) >= '1') && (*(str + finish) <= '9')))
	{
		finish++;
	}
	answ *= (sign * ft_int(str, start, finish));
	return (answ);
}
