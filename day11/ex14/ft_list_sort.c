/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 20:25:25 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 22:56:34 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
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
