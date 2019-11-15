/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:41:02 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 17:42:08 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	t_list *d;

	d = begin_list;
	while (begin_list)
	{
		d = begin_list;
		begin_list = begin_list->next;
	}
	return (d);
}
