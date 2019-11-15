/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 23:18:37 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 23:25:02 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *d;

	if (!(*begin_list1))
		(*begin_list1) = begin_list2;
	else
	{
		d = (*begin_list1);
		while (d->next)
		{
			d = d->next;
		}
		d->next = begin_list2;
	}
}
