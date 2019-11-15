/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/21 22:21:40 by sslift            #+#    #+#             */
/*   Updated: 2019/06/21 22:38:08 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int	g_count = 0;

void	ft_count_depth(t_btree *root, int nb_prev)
{
	int n;

	if (root == 0)
	{
		if (nb_prev > g_count)
			g_count = nb_prev;
		return ;
	}
	if (root)
	{
		n = nb_prev + 1;
		ft_count_depth(root->left, n);
		ft_count_depth(root->right, n);
	}
}

int		btree_level_count(t_btree *root)
{
	ft_count_depth(root, 0);
	return (g_count);
}
