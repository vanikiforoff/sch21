/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 17:26:35 by sslift            #+#    #+#             */
/*   Updated: 2019/06/13 16:10:55 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int			i;
	char		*str;

	if (!(str = malloc(ft_strlen(src) + 1)))
		return (NULL);
	i = 0;
	while (i < ft_strlen(src))
	{
		*(str + i) = *(src + i);
		i++;
	}
	*(str + i) = '\0';
	return (str);
}
