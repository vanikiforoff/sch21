/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 19:37:43 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 20:55:53 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;

	if (*to_find == '\0')
		return (str);
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) != *to_find)
		{
			i++;
			continue ;
		}
		j = 0;
		while (1)
		{
			if (*(to_find + j) == '\0')
				return (str + i + j - 1);
			if (*(str + i + j) != *(to_find + j))
				break ;
			j++;
		}
		i++;
	}
	return (0);
}
