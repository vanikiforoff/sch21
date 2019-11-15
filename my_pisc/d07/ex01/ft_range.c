/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 18:38:03 by sslift            #+#    #+#             */
/*   Updated: 2019/06/12 18:53:49 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;
	int j;

	if (min >= max)
		return (NULL);
	array = (int *)malloc((max - min) * sizeof(int));
	i = 0;
	j = min;
	while (i < (max - min))
	{
		array[i] = j;
		i++;
		j++;
	}
	return (array);
}
