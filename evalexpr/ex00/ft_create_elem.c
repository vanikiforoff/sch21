/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:52:48 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 06:16:19 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "eval_expr.h"

t_list	*ft_create_elem(int data, void *type, int status)
{
	t_list *d;

	d = malloc(sizeof(t_list));
	if (d)
	{
		d->data = data;
		d->type = type;
		d->status = status;
		d->next = NULL;
	}
	return (d);
}
