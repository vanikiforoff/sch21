/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/20 16:07:27 by sslift            #+#    #+#             */
/*   Updated: 2019/06/20 16:45:13 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	char	buf[BUF_SIZE + 1];
	int		fd;
	int		ret;

	if (argc == 1)
		return (ft_putstr(2, "File name missing.\n"));
	if (argc > 2)
		return (ft_putstr(2, "Too many arguments.\n"));
	fd = open(argv[1], O_RDONLY);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(1, buf);
	}
	close(fd);
	return (0);
}
