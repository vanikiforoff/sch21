/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:26:02 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 18:01:38 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list *prev_list;
	t_list *curr_list;
	t_list *next_list;

	prev_list = (void*)0;
	curr_list = *begin_list;
	while (curr_list != 0)
	{
		next_list = curr_list->next;
		curr_list->next = prev_list;
		prev_list = curr_list;
		curr_list = next_list;
	}
	*begin_list = prev_list;
}
