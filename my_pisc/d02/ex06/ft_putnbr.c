/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:44:34 by sslift            #+#    #+#             */
/*   Updated: 2019/06/06 22:02:57 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		count_l(int a)
{
	int count;

	if (a == 0)
		return (1);
	else
	{
		count = 1;
		while (a > 0)
		{
			count *= 10;
			a /= 10;
		}
		return (count / 10);
	}
}

void	ft_putnbr(int nb)
{
	int l;

	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	l = count_l(nb);
	while (l > 0)
	{
		ft_putchar('0' + nb / l);
		nb = nb - (nb / l) * l;
		l /= 10;
	}
}
