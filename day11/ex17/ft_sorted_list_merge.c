/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 22:38:23 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 22:56:35 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	f_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list_i;

	list_i = *begin_list1;
	if (list_i == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	while (list_i->next != 0)
		list_i = list_i->next;
	list_i->next = begin_list2;
}

void	f_list_sort(t_list **begin_list, int (*cmp)())
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

void	ft_sorted_list_merge(t_list **begin_list1, t_list *begin_list2,
							int (*cmp)())
{
	f_list_merge(begin_list1, begin_list2);
	f_list_sort(begin_list1, cmp);
}
