/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unmatch.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/14 11:24:02 by sslift            #+#    #+#             */
/*   Updated: 2019/06/14 11:38:37 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_unmatch(int *tab, int length)
{
	int i;
	int j;
	int cmp;
	int flag;

	i = 0;
	while (i < length - 1)
	{
		cmp = *(tab + i);
		j = 0;
		flag = 0;
		while (j < length)
		{
			if (*(tab + j) == cmp)
				flag++;
			j++;
		}
		if (flag % 2 == 1)
			return (cmp);
		i++;
	}
	return (0);
}
