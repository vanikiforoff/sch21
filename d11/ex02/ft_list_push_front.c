/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 16:48:22 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 17:11:48 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *d;

	d = ft_create_elem(data);
	if (begin_list && *begin_list)
	{
		d->next = (*begin_list);
		(*begin_list) = d;
	}
	else
		(*begin_list) = d;
}
