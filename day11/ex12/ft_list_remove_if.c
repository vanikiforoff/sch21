/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:40:00 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/19 11:51:04 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp_list;
	t_list	*curr_list;

	if (*begin_list == 0)
		return ;
	curr_list = *begin_list;
	while (curr_list != 0 && curr_list->next != 0)
	{
		tmp_list = curr_list->next;
		if (cmp(tmp_list->data, data_ref) == 0)
		{
			curr_list->next = tmp_list->next;
			free(tmp_list);
		}
		curr_list = curr_list->next;
	}
	if (cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp_list = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp_list);
	}
}
