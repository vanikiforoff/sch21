/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/13 17:27:12 by sslift            #+#    #+#             */
/*   Updated: 2019/06/13 18:08:14 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	ft_ap(int hour)
{
	char ap;

	if (hour < 12)
		ap = 'A';
	else
		ap = 'P';
	return (ap);
}

int		ft_if(int hour)
{
	if (hour % 12 == 0)
		return (12);
	else
		return (hour % 12);
}

void	ft_takes_place(int hour)
{
	int		hour_n;
	char	c1;
	char	c2;

	hour = hour % 24;
	hour_n = (hour + 1) % 24;
	c1 = ft_ap(hour);
	c2 = ft_ap(hour_n);
	hour = ft_if(hour);
	hour_n = ft_if(hour_n);
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 34);
	printf("%d.00 %c.M. AND %d.00 %c.M.\n", hour, c1, hour_n, c2);
}
