/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_for_lists.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/23 05:59:42 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 06:12:45 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

int		ft_strcmp(void *s1, void *s2)
{
	char	*st1;
	char	*st2;
	int		i;

	st1 = (char *)s1;
	st2 = (char *)s2;
	i = 0;
	while (*(st1 + i) != '\0')
	{
		if (*(st1 + i) != *(st2 + i))
			return (*(st1 + i) - *(st2 + i));
		i++;
	}
	if (*(st2 + i) != '\0')
		return (-*(st2 + i));
	else
		return (0);
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

int		find_op(t_list *begin_list, int stat)
{
	int i;

	i = 1;
	while (begin_list)
	{
		if (ft_strcmp(begin_list->type, "op") == 0)
			if (begin_list->status == stat)
				return (i);
		begin_list = begin_list->next;
		i++;
	}
	return (0);
}

int		find_num(t_list *expr, int nbr)
{
	int n;

	if (ft_list_at(expr, nbr))
	{
		if (ft_strcmp(ft_list_at(expr, nbr)->type, "num") == 0)
		{
			ft_list_at(expr, nbr)->status = 0;
			return (ft_list_at(expr, nbr)->data);
		}
		else
			return (0);
	}
	return (0);
}
