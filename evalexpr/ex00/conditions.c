/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   conditions.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 06:17:37 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 06:21:11 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		if_br(char c)
{
	if ((c == '(') || (c == ')'))
		return (1);
	return (0);
}

int		if_op(char c)
{
	if ((c == '+') || (c == '-') || (c == '*') ||
			(c == '/') || (c == '%'))
		return (1);
	return (0);
}

int		if_num(char c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	return (0);
}
