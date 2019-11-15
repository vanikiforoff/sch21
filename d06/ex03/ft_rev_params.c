/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 15:16:15 by sslift            #+#    #+#             */
/*   Updated: 2019/06/12 15:25:13 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (*(argv[i] + j) != '\0')
		{
			ft_putchar(*(argv[i] + j));
			j++;
		}
		ft_putchar('\n');
		i--;
	}
	return (0);
}
