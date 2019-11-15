/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 16:47:47 by sslift            #+#    #+#             */
/*   Updated: 2019/06/08 20:50:37 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		check_if_correct(int *d, int n)
{
	int i;
	int dif;

	i = 0;
	while (i < n)
	{
		dif = n - i;
		if ((d[i] == d[n]) || (d[i] == d[n] + dif) || (d[i] == d[n] - dif))
			return (0);
		i++;
	}
	return (1);
}

void	ft_all_putchar(int *d)
{
	int i;

	i = 0;
	while (i < 8)
	{
		ft_putchar('1' + d[i]);
		i++;
	}
	ft_putchar('\n');
}

int		ft_main(int *d, int n)
{
	int i;

	if (n > 7)
		return (0);
	i = 0;
	while (i < 8)
	{
		d[n] = i;
		if (check_if_correct(d, n))
		{
			if (n == 7)
			{
				ft_all_putchar(d);
			}
			else
				ft_main(d, n + 1);
		}
		i++;
	}
	return (0);
}

void	ft_eight_queens_puzzle_2(void)
{
	int d[8];
	int i;

	i = 0;
	while (i < 8)
	{
		d[i] = 0;
		i++;
	}
	i = ft_main(d, 0);
}
