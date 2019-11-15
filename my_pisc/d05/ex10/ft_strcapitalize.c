/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 22:20:27 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 21:13:55 by sslift           ###   ########.fr       */
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

char	*ft_strcapitalize(char *str)
{
	int i;
	int d;

	d = 'a' - 'A';
	i = 0;
	str = ft_strlowercase(str);
	while (*(str + i) != '\0')
	{
		if ((*(str + i) >= 'a') && (*(str + i) <= 'z'))
		{
			if ((i == 0) ||
				(((*(str + i - 1) < '0') || (*(str + i - 1) > '9')) &&
				((*(str + i - 1) < 'A') || (*(str + i - 1) > 'Z')) &&
				((*(str + i - 1) < 'a') || (*(str + i - 1) > 'z'))))
				*(str + i) = *(str + i) - d;
		}
		i++;
	}
	return (str);
}
