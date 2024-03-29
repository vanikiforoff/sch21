/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 13:57:28 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 14:05:36 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_str_is_alpha(char *str)
{
	unsigned int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (((*(str + i) < 'A') || (*(str + i) > 'Z')) &&
			((*(str + i) < 'a') || (*(str + i) > 'z')))
			return (0);
		i++;
	}
	return (1);
}
