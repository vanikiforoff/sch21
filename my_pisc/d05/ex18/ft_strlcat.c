/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 15:25:06 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 21:56:24 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != 0)
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int n;

	i = 0;
	n = size;
	while ((*(dest + i) != '\0') && (n-- != 0))
	{
		i++;
	}
	n = size - i;
	if (n == 0)
		return (i + ft_strlen(src));
	j = 0;
	while (*(src + j) != '\0')
	{
		if (n != 0)
		{
			*(dest + i + j) = *(src + j);
			n--;
		}
		j++;
	}
	*(dest + i + j) = '\0';
	return (i + j);
}
