/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 15:48:43 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 22:43:51 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *d;
	t_list *tmp;

	d = ft_create_elem(data);
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
