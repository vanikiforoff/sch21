/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 10:34:27 by sslift            #+#    #+#             */
/*   Updated: 2019/06/06 22:01:43 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_all_putchar(int a, int b, int c)
{
	ft_putchar('0' + a);
	ft_putchar('0' + b);
	ft_putchar('0' + c);
	if (!((a == 7) && (b == 8) && (c == 9)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	while (i < 8)
	{
		j = i + 1;
		while ((j < 9) && (i < j))
		{
			k = j + 1;
			while ((k <= 9) && (j < k))
			{
				ft_all_putchar(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}
