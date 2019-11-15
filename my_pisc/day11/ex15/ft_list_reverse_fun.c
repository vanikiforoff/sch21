/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 21:24:53 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 21:58:43 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	f_list_replace_data(t_list *list1, t_list *list2)
{
	void	*temp_v;

	temp_v = list1->data;
	list1->data = list2->data;
	list2->data = temp_v;
}

int		f_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

void	ft_list_reverse_fun(t_list *begin_list)
{
	int		count;
	int		i;
	t_list	*list_i;

	count = f_list_size(begin_list);
	list_i = begin_list;
	while (count > 1)
	{
		i = 0;
		while (i < count - 1)
		{
			f_list_replace_data(list_i, list_i->next);
			list_i = list_i->next;
			i++;
		}
		count--;
		list_i = begin_list;
	}
}
