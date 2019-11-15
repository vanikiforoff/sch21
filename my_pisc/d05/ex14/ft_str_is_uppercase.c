/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 14:41:33 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 14:43:29 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_uppercase(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if ((*(str + i) < 'A') || (*(str + i) > 'Z'))
			return (0);
		i++;
	}
	return (1);
}