/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/08 06:24:52 by sslift            #+#    #+#             */
/*   Updated: 2019/06/08 10:58:54 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		binary(int n)
{
	int left;
	int right;
	int mid;

	left = 0;
	right = 46340;
	if (right * right < n)
		return (right);
	else if (right * right == n)
		return (right);
	while (left <= right)
	{
		mid = (left + right) / 2;
		if (mid * mid == n)
			return (mid);
		else if (mid * mid < n)
			left = mid + 1;
		else
			right = mid - 1;
	}
	return (right);
}

int		ft_sqrt(int nb)
{
	if (nb <= 0)
		return (0);
	return (binary(nb));
}

int		ft_is_prime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= ft_sqrt(nb))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}
