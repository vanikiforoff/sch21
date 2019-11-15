/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cleanser.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 06:23:00 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 07:14:15 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_clean(t_list **expr)
{
	t_list	*tmp;
	t_list	*d;

	if (*expr == 0)
		return ;
	d = *expr;
	while ((d != 0) && (d->next != 0))
	{
		tmp = d->next;
		if (tmp->status == 0)
		{
			d->next = tmp->next;
			free(tmp);
		}
		d = d->next;
	}
	if ((*expr)->status == 0)
	{
		tmp = *expr;
		*expr = (*expr)->next;
		free(tmp);
	}
}

int		ft_if_status0(t_list *expr)
{
	while (expr)
	{
		if (expr->status == 0)
			return (1);
		expr = expr->next;
	}
	return (0);
}

void	super_clean(t_list **expr)
{
	while (ft_if_status0(*expr))
		ft_clean(expr);
}
