/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 12:38:14 by sslift            #+#    #+#             */
/*   Updated: 2019/06/13 20:51:43 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		g_k = 0;

int		ft_if_del(char c)
{
	if ((c == ' ') || (c == '\t') || (c == '\n'))
		return (1);
	return (0);
}

int		ft_if_split(char c_prev, char c)
{
	if (ft_if_del(c))
		return (0);
	if (ft_if_del(c_prev))
		return (1);
	return (0);
}

int		ft_nbr_split(char *str)
{
	int i;
	int nb;

	i = 0;
	nb = 0;
	while (*(str + i) != '\0')
	{
		if ((i == 0) && (!ft_if_del(*str)))
			nb++;
		else if (!ft_if_del(*(str + i)) &&
				(ft_if_split(*(str + i - 1), *(str + i))))
			nb++;
		i++;
	}
	return (nb);
}

char	*ft_split(char *str, int len, int i)
{
	int		j;
	int		k;
	char	*s;

	j = i - len;
	k = 0;
	s = malloc((len + 1) * sizeof(char));
	while (k < len)
	{
		*(s + k) = *(str + j);
		*(s + k + 1) = '\0';
		j++;
		k++;
	}
	return (s);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	char	**split;
	int		len;

	split = malloc((ft_nbr_split(str) + 1) * sizeof(char *));
	i = 0;
	while (*(str + i) != '\0')
	{
		len = 0;
		if ((((i == 0) && (!ft_if_del(*str))) && (*(str + i) != '\0')) ||
				(!ft_if_del(*(str + i)) &&
				(ft_if_split(*(str + i - 1), *(str + i)))))
		{
			while ((*(str + i) != '\0') && (!ft_if_del(*(str + i))))
			{
				len++;
				i++;
			}
			split[g_k] = ft_split(str, len, i);
			g_k++;
		}
		i++;
	}
	split[g_k] = 0;
	return (split);
}
