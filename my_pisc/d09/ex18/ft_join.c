/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 10:23:59 by sslift            #+#    #+#             */
/*   Updated: 2019/06/14 11:07:57 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_size_of_ar(char **tab)
{
	int i;
	int j;
	int count;

	i = 0;
	count = 0;
	while (*(tab + i) != 0)
	{
		j = 0;
		while (*(tab[i] + j) != '\0')
		{
			count++;
			j++;
		}
		count++;
		i++;
	}
	return (count);
}

char	*ft_join(char **tab, char *sep)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc((ft_size_of_ar(tab) + 1) * sizeof(char));
	i = 0;
	k = 0;
	while (i < ft_size_of_ar(tab))
	{
		j = 0;
		while (*(tab[i] + j) != '\0')
		{
			*(str + k) = *(tab[i] + j);
			j++;
			k++;
		}
		*(str + k) = *sep;
		k++;
		i++;
	}
	*(str + k - 1) = '\0';
	return (str);
}
