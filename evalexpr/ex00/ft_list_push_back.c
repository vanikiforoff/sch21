/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 22:02:50 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 06:16:41 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

void	ft_list_push_back(t_list **begin_list,
		int data, void *type, int status)
{
	t_list *d;
	t_list *tmp;

	d = ft_create_elem(data, type, status);
	if (begin_list && *begin_list)
	{
		tmp = (*begin_list);
		while (tmp->next)
		{
			tmp = tmp->next;
		}
		tmp->next = d;
	}
	else
		(*begin_list) = d;
}
