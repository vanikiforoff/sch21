/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 09:34:11 by sslift            #+#    #+#             */
/*   Updated: 2019/06/14 09:42:04 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}

int		ft_max(int *tab, int length)
{
	int i;
	int j;

	i = length - 1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (tab[j] < tab[j + 1])
				ft_swap(tab + j, tab + j + 1);
			j++;
		}
		i--;
	}
	return (*tab);
}
