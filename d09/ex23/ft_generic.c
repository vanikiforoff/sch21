/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 15:29:35 by sslift            #+#    #+#             */
/*   Updated: 2019/06/14 15:29:41 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_generic(void)
{
	char	*str;
	int		i;

	i = 0;
	str = "Tut tut ; Tut tut\n";
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}
