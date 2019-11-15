/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:27:26 by sslift            #+#    #+#             */
/*   Updated: 2019/06/12 16:30:46 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (!argc)
		return (0);
	while (*(argv[0] + i) != '\0')
	{
		ft_putchar(*(argv[0] + i));
		i++;
	}
	ft_putchar('\n');
	return (0);
}
