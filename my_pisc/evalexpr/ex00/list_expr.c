/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 01:05:11 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 09:20:31 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		g_br = 0;

void	push_br(t_list **expr, char c)
{
	if (c == '(')
	{
		g_br++;
		ft_list_push_back(expr, g_br, "br", 2);
	}
	else
	{
		ft_list_push_back(expr, g_br, "br", 1);
		g_br--;
	}
}

void	push_op(t_list **expr, char c)
{
	if ((c == '+') || (c == '-'))
		ft_list_push_back(expr, c, "op", 2);
	else
		ft_list_push_back(expr, c, "op", 1);
}

int		ft_len_nbr(char *str, int j)
{
	int i;

	i = 0;
	while (if_num(*(str + j + i)) && (*(str + j + i) != '\0'))
	{
		i++;
	}
	return (i);
}

t_list	*list_expr(char *str)
{
	int			i;
	t_list		*expr;
	int			n;

	i = 0;
	expr = NULL;
	while (*(str + i) != '\0')
	{
		if (if_br(*(str + i)))
			push_br(&expr, *(str + i));
		else if (if_op(*(str + i)))
			push_op(&expr, *(str + i));
		else if (if_num(*(str + i)))
		{
			n = ft_atoi(str + i);
			ft_list_push_back(&expr, n, "num", 1);
			i += ft_len_nbr(str, i) - 1;
		}
		i++;
	}
	return (expr);
}
