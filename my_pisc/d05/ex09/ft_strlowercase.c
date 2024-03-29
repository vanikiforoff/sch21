/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowercase.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 22:13:28 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 21:07:57 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowercase(char *str)
{
	int d;
	int i;

	d = 'a' - 'A';
	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'A') && (*(str + i) <= 'Z'))
			*(str + i) = *(str + i) + d;
		i++;
	}
	return (str);
}
