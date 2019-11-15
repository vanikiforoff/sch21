/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calc.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 01:59:13 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 02:11:34 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_condition(char c, int a, int b, int (*f_array[5])(int, int))
{
	if (c == '+')
		return ((*f_array[0])(a, b));
	else if (c == '-')
		return ((*f_array[1])(a, b));
	else if (c == '/')
		return ((*f_array[2])(a, b));
	else if (c == '%')
		return ((*f_array[3])(a, b));
	else if (c == '*')
		return ((*f_array[4])(a, b));
	else
		return (0);
}

int		ft_calc(int left, int right, char op)
{
	int (*f_array[5])(int, int);

	f_array[0] = sum;
	f_array[1] = sub;
	f_array[2] = divid;
	f_array[3] = mod;
	f_array[4] = tim;
	return (ft_condition(op, left, right, f_array));
}
