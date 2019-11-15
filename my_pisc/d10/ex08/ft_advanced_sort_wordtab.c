/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_wordtab.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 17:03:32 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 17:13:11 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(char **a, char **b)
{
	char *m;

	m = *a;
	*a = *b;
	*b = m;
}

int		ft_tablen(char **tab)
{
	int i;

	i = 0;
	while (*(tab + i) != 0)
	{
		i++;
	}
	return (i);
}

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *))
{
	int i;
	int j;

	i = ft_tablen(tab) - 1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
				ft_swap(tab + j, tab + j + 1);
			j++;
		}
		i--;
	}
}
