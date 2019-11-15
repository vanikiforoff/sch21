/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 22:16:50 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/19 11:46:36 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	f_list_sort16(t_list **begin_list, int (*cmp)())
{
	t_list	*list_i;
	t_list	*list_j;
	void	*temp_v;

	list_i = *begin_list;
	while (list_i != 0)
	{
		list_j = list_i->next;
		while (list_j != 0)
		{
			if (cmp(list_i->data, list_j->data) > 0)
			{
				temp_v = list_i->data;
				list_i->data = list_j->data;
				list_j->data = temp_v;
			}
			list_j = list_j->next;
		}
		list_i = list_i->next;
	}
}

void	f_list_push_back16(t_list **begin_list, void *data)
{
	t_list	*list_i;
	t_list	*new_el;

	new_el = ft_create_elem(data);
	if (*begin_list == 0 || begin_list == 0)
	{
		*begin_list = new_el;
		return ;
	}
	list_i = *begin_list;
	while (list_i->next)
	{
		list_i = list_i->next;
	}
	list_i->next = new_el;
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	f_list_push_back16(begin_list, data);
	f_list_sort16(begin_list, cmp);
}
