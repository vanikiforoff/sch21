/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_active_bits.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 08:24:40 by sslift            #+#    #+#             */
/*   Updated: 2019/06/14 08:27:12 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_active_bits(int value)
{
	int count;

	count = 0;
	while (value > 0)
	{
		count += value % 2;
		n >>= 1;
	}
	return (count);
}