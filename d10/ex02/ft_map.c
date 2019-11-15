/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 19:02:32 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 23:24:27 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *array;
	int i;

	array = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		*(array + i) = f(*(tab + i));
		i++;
	}
	return (array);
}
