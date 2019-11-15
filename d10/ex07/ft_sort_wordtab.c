/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 16:20:44 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 17:02:16 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0')
	{
		if (*(s1 + i) != *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		i++;
	}
	if (*(s2 + i) != '\0')
		return (-*(s2 + i));
	else
		return (0);
}

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

void	ft_sort_wordtab(char **tab)
{
	int i;
	int j;

	i = ft_tablen(tab) - 1;
	while (i > 0)
	{
		j = 0;
		while (j < i)
		{
			if (ft_strcmp(tab[j], tab[j + 1]) > 0)
				ft_swap(tab + j, tab + j + 1);
			j++;
		}
		i--;
	}
}
