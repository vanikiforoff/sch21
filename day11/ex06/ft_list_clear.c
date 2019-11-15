/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:23:52 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 18:27:04 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*list;

	if (begin_list == 0)
		return ;
	while (*begin_list != 0)
	{
		list = *begin_list;
		*begin_list = (*begin_list)->next;
		free(list);
	}
	*begin_list = (void *)0;
}
