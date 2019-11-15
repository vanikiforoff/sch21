/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 12:58:14 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 15:58:47 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_el;

	new_el = ft_create_elem(data);
	if (*begin_list == 0 || begin_list == 0)
	{
		*begin_list = new_el;
		return ;
	}
	new_el->next = *begin_list;
	*begin_list = new_el;
}
