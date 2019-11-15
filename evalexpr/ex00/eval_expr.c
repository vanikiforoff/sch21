/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 01:05:37 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 07:29:08 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void		ops(t_list **expr, int status)
{
	int		nb;
	int		left;
	int		right;
	int		point;
	char	op;

	nb = 0;
	while ((point = find_op(*expr, status)))
	{
		while (ft_strcmp(ft_list_at(*expr, point)->next->type, "op") == 0)
			point++;
		left = find_num(*expr, point - 1);
		right = find_num(*expr, point + 1);
		op = ft_list_at(*expr, point)->data;
		ft_list_at(*expr, point)->status = 0;
		nb = ft_calc(left, right, op);
		ft_list_at(*expr, point + 1)->data = nb;
		ft_list_at(*expr, point + 1)->status = 1;
		super_clean(expr);
	}
}

int			eval_simple(t_list **expr)
{
	int		nb;
	t_list	*tmp;

	nb = 0;
	ops(expr, 1);
	super_clean(expr);
	ops(expr, 2);
	if (ft_list_size(*expr) == 1)
		nb = find_num(*expr, 1);
	return (nb);
}

void		null_status(t_list **expr, int left, int right)
{
	while (left <= right)
	{
		ft_list_at(*expr, left)->status = 0;
		left++;
	}
}

int			eval_braces(t_list **expr)
{
	t_list	*tmp;
	int		point;
	int		point_end;
	int		data_br;
	int		nb;

	nb = 0;
	while ((point = find_br(*expr)))
	{
		data_br = ft_list_at(*expr, point)->data;
		while (ft_if_brace_bigger(*expr, data_br))
			data_br++;
		point = find_br_data(*expr, data_br);
		point_end = find_br_end(*expr, data_br);
		tmp = ft_create_brace_list(*expr, point, point_end);
		nb = eval_simple(&tmp);
		free(tmp);
		null_status(expr, point, point_end);
		ft_list_at(*expr, point_end)->type = "num";
		ft_list_at(*expr, point_end)->data = nb;
		ft_list_at(*expr, point_end)->status = 1;
		super_clean(expr);
	}
	return (nb);
}

int			eval_expr(char *str)
{
	int		nb;
	t_list	*expr;

	expr = list_expr(str);
	nb = eval_braces(&expr);
	ops(&expr, 1);
	super_clean(&expr);
	ops(&expr, 2);
	if (ft_list_size(expr) == 1)
		nb = find_num(expr, 1);
	return (nb);
}
