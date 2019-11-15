/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 21:25:48 by sslift            #+#    #+#             */
/*   Updated: 2019/06/21 22:25:18 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root,
		void *data_ref, int (*cmpf)(void *, void *))
{
	void *tmp;

	if (root == 0)
		return (0);
	if (root)
	{
		tmp = btree_search_item(root->left, data_ref, cmpf);
		if (tmp)
			return (tmp);
		if (cmpf(root->item, data_ref) == 0)
			return (root->item);
		tmp = btree_search_item(root->right, data_ref, cmpf);
		if (tmp)
			return (tmp);
	}
	return (0);
}
