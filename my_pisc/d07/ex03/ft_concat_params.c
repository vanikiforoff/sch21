/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 19:40:20 by sslift            #+#    #+#             */
/*   Updated: 2019/06/13 21:56:13 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*str;
	int		i;
	int		j;
	int		k;

	str = (char *)malloc(argc * sizeof(char));
	i = 1;
	k = 0;
	while (i < argc)
	{
		j = 0;
		while (*(argv[i] + j) != '\0')
		{
			*(str + k) = *(argv[i] + j);
			j++;
			k++;
		}
		*(str + k) = '\n';
		k++;
		i++;
	}
	*(str + k - 1) = '\0';
	return (str);
}
