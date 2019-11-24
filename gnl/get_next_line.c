/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <sslift@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:25:55 by sslift            #+#    #+#             */
/*   Updated: 2019/11/24 17:20:20 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int if_open(const int fd, t_file *files)
{
	while (files)
	{
		if (files.fd == fd)
			return (1);
		files = files->next;
	}
	return (0);
}

t_file *ft_file_at(const int fd, t_file *files) {
	while (files) {
		if (files.fd == fd)
			return files;
		files = files->next;
	}
	return (NULL);
}



int	ft_readline(const int fd, char **line, t_file *files) {
	t_file *file;


	if (if_open(fd, files)) {
		file.fd = fd;
		ft_read(fd, file, line);
	} else {
		ft_read(fd, ft_file_at(fd, files), line);
	}
}

int get_next_line(const int fd, char **line)
{
	static t_file *files;
	int check;

	check = ft_readline(fd, line, files);
}
