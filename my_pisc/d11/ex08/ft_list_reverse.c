/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/19 19:33:08 by sslift            #+#    #+#             */
/*   Updated: 2019/06/19 20:59:52 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_swap(void **a, void **b)
{
	void *m;

	m = *a;
	*a = *b;
	*b = m;
}

int		ft_list_size(t_list *begin_list)
{
	int count;

	count = 0;
	while (begin_list)
	{
		begin_list = begin_list->next;
		count++;
	}
	return (count);
}

t_list	*ft_list_at(t_list *begin_list, int nbr)
{
	int i;

	if ((ft_list_size(begin_list) < nbr) || (nbr < 1))
		return (NULL);
	i = 1;
	while (i < nbr)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (begin_list);
}

void	ft_list_reverse(t_list **begin_list)
{
	int nb;
	int i;

	nb = ft_list_size(*begin_list);
	if (nb < 2)
		return ;
	i = 1;
	while (i <= nb / 2)
	{
		ft_swap(&(ft_list_at(*begin_list, i)->data),
				&(ft_list_at(*begin_list, nb - i + 1)->data));
		i++;
	}
}
