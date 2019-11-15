/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 17:56:56 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 18:11:17 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*list;
	int		i;
	t_list	*d;

	list = NULL;
	i = 0;
	while (i < ac)
	{
		d = ft_create_elem(av[i]);
		d->next = list;
		list = d;
		i++;
	}
	return (list);
}
