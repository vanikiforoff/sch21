/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 16:31:29 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 20:45:53 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_nb(char *str, int start, int sign)
{
	int nb;

	nb = 0;
	while (*(str + start) != '\0')
	{
		if ((*(str + start) - '0' > 9) || (*(str + start) - '0' < 0))
			break ;
		nb = 10 * nb + sign * (*(str + start) - '0');
		start++;
	}
	return (nb);
}

int		ft_atoi(char *str)
{
	int start;
	int sign;

	start = 0;
	sign = 1;
	while ((*(str + start) == ' ') || (*(str + start) == '\t') ||
			(*(str + start) == '\n') || (*(str + start) == '\v') ||
			(*(str + start) == '\f') || (*(str + start) == '\r'))
	{
		start++;
	}
	if ((*(str + start) == '-') || (*(str + start) == '+'))
	{
		if (*(str + start) == '-')
			sign = -1;
		start++;
	}
	return (ft_nb(str, start, sign));
}
