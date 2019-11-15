/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:37:47 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 22:09:45 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

void	ft_if_div(int a, int b, int i)
{
	if (b == 0)
		ft_putstr("Stop : division by zero");
	else
		ft_putnbr(g_opptab[i].f(a, b));
}

void	ft_if_mod(int a, int b, int i)
{
	if (b == 0)
		ft_putstr("Stop : modulo by zero");
	else
		ft_putnbr(g_opptab[i].f(a, b));
}

void	ft_condition(char *str, int a, int b)
{
	int i;
	int flag;

	i = 0;
	flag = 1;
	while (ft_strcmp(g_opptab[i].operator, "") != 0)
	{
		if (ft_strcmp(g_opptab[i].operator, str) == 0)
		{
			if (g_opptab[i].f == ft_div)
				ft_if_div(a, b, i);
			else if (g_opptab[i].f == ft_mod)
				ft_if_mod(a, b, i);
			else
				ft_putnbr(g_opptab[i].f(a, b));
			flag = 0;
		}
		i++;
	}
	if (flag)
		g_opptab[i].f(0, 0);
}

int		main(int argc, char **argv)
{
	int a;
	int b;

	if (argc != 4)
		return (0);
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	ft_condition(argv[2], a, b);
	return (ft_putchar('\n'));
}
