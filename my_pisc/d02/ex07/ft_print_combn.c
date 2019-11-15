/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/06 13:35:43 by sslift            #+#    #+#             */
/*   Updated: 2019/06/06 22:03:39 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		sum_array(int n, int ar[])
{
	int i;
	int sum;

	i = 0;
	sum = 0;
	while (i < n)
	{
		sum += ar[i];
		i++;
	}
	return (sum);
}

void	ft_all_putchar(int n, int ar[])
{
	int i;
	int sum;

	i = 0;
	sum = (19 - n) * n / 2;
	while (i < n)
	{
		ft_putchar('0' + ar[i]);
		i++;
	}
	if (!(sum_array(n, ar) == (sum)))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_loop(int i, int j, int n, int ar[])
{
	while (sum_array(n, ar) < ((19 - n) * n / 2))
	{
		i = n - 1;
		while (sum_array(n, ar) < ((19 - n) * n / 2))
		{
			if (((ar[i] + 1) <= 9) && ((ar[i] + 1) < ar[i + 1]))
			{
				ar[i]++;
				if (i < (n - 1))
				{
					j = i + 1;
					while (j <= (n - 1))
					{
						ar[j] = ar[j - 1] + 1;
						j++;
					}
				}
				ft_all_putchar(n, ar);
				break ;
			}
			else
				i--;
		}
	}
}

void	ft_print_combn(int n)
{
	int ar[10];
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < n)
	{
		ar[i] = i;
		i++;
	}
	ar[n - 1] -= 1;
	ar[n] = 10;
	ft_loop(i, j, n, ar);
}
