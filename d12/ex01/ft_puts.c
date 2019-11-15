/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puts.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:29:33 by sslift            #+#    #+#             */
/*   Updated: 2019/06/20 16:45:47 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_putchar(int fb, char c)
{
	write(fb, &c, 1);
	return (0);
}

int		ft_putstr(int fb, char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(fb, *(str + i));
		i++;
	}
	return (0);
}
