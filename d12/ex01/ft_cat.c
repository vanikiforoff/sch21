/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 17:15:49 by sslift            #+#    #+#             */
/*   Updated: 2019/06/20 19:21:15 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	ft_print_read(void)
{
	char	buf[BUF_SIZE + 1];
	int		ret;

	while (1)
	{
		while ((ret = read(0, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(1, buf);
		}
	}
}

void	ft_print(char *file_name)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;

	fd = open(file_name, O_RDWR);
	if (fd < 0)
	{
		ft_putstr(2, "cat: ");
		ft_putstr(2, file_name);
		if (errno == 21)
			ft_putstr(2, ": Is a directory\n");
		else if (errno == 13)
			ft_putstr(2, ": Permission denied\n");
		else if (errno == 2)
			ft_putstr(2, ": No such file or directory\n");
	}
	else
	{
		while ((ret = read(fd, buf, BUF_SIZE)))
		{
			buf[ret] = '\0';
			ft_putstr(1, buf);
		}
		close(fd);
	}
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		ft_print_read();
	else
	{
		i = 1;
		while (i < argc)
		{
			if (*argv[i] == '-')
				ft_print_read();
			ft_print(argv[i]);
			i++;
		}
	}
	return (0);
}
