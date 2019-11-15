/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: odrinkwa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 15:13:40 by odrinkwa          #+#    #+#             */
/*   Updated: 2019/06/18 18:30:26 by odrinkwa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*start_list;
	t_list	*temp_list;

	if (ac <= 0)
		return (0);
	temp_list = 0;
	i = 0;
	while (i < ac)
	{
		start_list = ft_create_elem(av[i]);
		start_list->next = temp_list;
		temp_list = start_list;
		i++;
	}
	return (start_list);
}
