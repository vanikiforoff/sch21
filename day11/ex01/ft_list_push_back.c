/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:38:01 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 15:49:21 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
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
