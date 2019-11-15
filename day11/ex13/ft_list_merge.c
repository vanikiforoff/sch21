/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 19:54:17 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/19 11:46:21 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list_i;

	if (begin_list1 == 0 || *begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	list_i = *begin_list1;
	while (list_i->next != 0)
		list_i = list_i->next;
	list_i->next = begin_list2;
}
