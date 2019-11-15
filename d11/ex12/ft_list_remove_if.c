/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 21:53:35 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 23:16:44 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list d;
	t_list t;

	d = *begin_list;
	while (d && d->next)
	{
		if (cmp((d->next)->data, data_ref) == 0)
		{
			t = d->next;
			d->next = d->next->next;
			free(t);
		}
		d = d->next;
	}
	d = *begin_list;
	if (cmp(d->data, data_ref) == 0)
	{
		t = d->next;
		d = d->next;
		free(t);
	}
	*begin_list = d;
}
