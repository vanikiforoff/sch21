/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   braces.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 04:13:25 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 05:53:47 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		find_br(t_list *begin_list)
{
	int i;

	i = 1;
	while (begin_list)
	{
		if (ft_strcmp(begin_list->type, "br") == 0)
			return (i);
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}

int		find_br_data(t_list *expr, int br)
{
	int i;

	i = 1;
	while (expr)
	{
		if (ft_strcmp(expr->type, "br") == 0)
			if (expr->data == br)
				return (i);
		expr = expr->next;
		i++;
	}
	return (0);
}

int		find_br_end(t_list *expr, int br)
{
	int i;

	i = 1;
	while (expr)
	{
		if (ft_strcmp(expr->type, "br") == 0)
			if (expr->data == br)
				if (expr->status == 1)
					return (i);
		expr = expr->next;
		i++;
	}
	return (0);
}

int		ft_if_brace_bigger(t_list *expr, int br)
{
	while (expr)
	{
		if (ft_strcmp(expr->type, "br") == 0)
			if (expr->data > br)
				return (1);
		expr = expr->next;
	}
	return (0);
}

t_list	*ft_create_brace_list(t_list *expr, int left, int right)
{
	t_list	*brace_list;
	int		i;
	int		data;
	void	*type;
	int		status;

	brace_list = NULL;
	i = left + 1;
	while (i < right)
	{
		data = ft_list_at(expr, i)->data;
		type = ft_list_at(expr, i)->type;
		status = ft_list_at(expr, i)->status;
		ft_list_push_back(&brace_list, data, type, status);
		i++;
	}
	return (brace_list);
}
