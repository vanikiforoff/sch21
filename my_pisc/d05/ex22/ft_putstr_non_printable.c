/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/11 22:46:33 by sslift            #+#    #+#             */
/*   Updated: 2019/06/11 23:21:56 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		ft_str_is_printable(char str)
{
	if ((str < 32) || (str > 126))
		return (0);
	return (1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;
	int		a;
	int		b;
	char	*base;

	base = "0123456789abcdef";
	i = 0;
	while (*(str + i) != '\0')
	{
		if (ft_str_is_printable(*(str + i)))
			ft_putchar(*(str + i));
		else
		{
			a = *(str + i) / 16;
			b = *(str + i) % 16;
			ft_putchar('\\');
			if (base[a] != 0)
				ft_putchar(base[a]);
			ft_putchar(base[b]);
		}
		i++;
	}
}
