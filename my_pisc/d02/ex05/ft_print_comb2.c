/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 12:16:05 by sslift            #+#    #+#             */
/*   Updated: 2019/06/06 22:02:18 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_all_putchar(int a, int b, int c, int d)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar(' ');
	ft_putchar('0' + c);
	ft_putchar('0' + d);
	if (!((a == 9) && (b == 8) && (c == 9) && (d == 9)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int i;
	int j;

	i = 0;
	while (i < 99)
	{
		j = i + 1;
		while (j <= 99)
		{
			ft_all_putchar(i / 10, i % 10, j / 10, j % 10);
			j++;
		}
		i++;
	}
}
