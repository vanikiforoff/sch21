/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 18:21:20 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 19:01:17 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*d;

	d = (*begin_list);
	while (d)
	{
		d = (*begin_list)->next;
		free(*begin_list);
		(*begin_list) = d;
	}
	(*begin_list) = NULL;
}
