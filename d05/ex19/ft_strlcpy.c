/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 17:45:12 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 22:06:56 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;

	i = 0;
	while (*(src + i) != '\0')
	{
		i++;
	}
	j = 0;
	if (size > 0)
	{
		while (j < size - 1)
		{
			*(dest + j) = *(src + j);
			if (*(src + j) == '\0')
				break ;
			j++;
		}
		*(dest + j) = '\0';
	}
	return (i);
}
