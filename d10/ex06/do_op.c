/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:00:46 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 15:48:31 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

void	ft_condition(char c, int a, int b, int (*f_array[5])(int, int))
{
	if (c == '+')
		ft_putnbr((*f_array[0])(a, b));
	else if (c == '-')
		ft_putnbr((*f_array[1])(a, b));
	else if (c == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero");
		else
			ft_putnbr((*f_array[2])(a, b));
	}
	else if (c == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero");
		else
			ft_putnbr((*f_array[3])(a, b));
	}
	else if (c == '*')
		ft_putnbr((*f_array[4])(a, b));
	else
		ft_putstr("0");
}

int		main(int argc, char **argv)
{
	int (*f_array[5])(int, int);
	int a;
	int b;

	f_array[0] = sum;
	f_array[1] = sub;
	f_array[2] = div;
	f_array[3] = mod;
	f_array[4] = tim;
	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	if (ft_strlen(argv[2]) != 1)
		ft_putstr("0");
	else
		ft_condition(*argv[2], a, b, f_array);
	return (ft_putchar('\n'));
}
