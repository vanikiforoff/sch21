/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funcs.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:08:03 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 02:10:48 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		sum(int a, int b)
{
	return (a + b);
}

int		sub(int a, int b)
{
	return (a - b);
}

int		divid(int a, int b)
{
	return (a / b);
}

int		mod(int a, int b)
{
	return (a % b);
}

int		tim(int a, int b)
{
	return (a * b);
}
