/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <sslift@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:25:55 by sslift            #+#    #+#             */
/*   Updated: 2019/11/27 00:20:26 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_length(t_file *files) {
	char *tmp;
	int i;

	if (!(tmp = ft_strchr(files->rest, '\n')))
		i = ft_strlen(files->rest);
	else
		i = tmp - files->rest;
	//ft_strdel(&tmp);
	printf("%d\n", i);
	return (i);
}

int		ft_readline(const int fd, char **line, t_file *files)
{
	int check;
	char *str;

	str = files->rest;
	files->rest = ft_strsub(files->rest, ft_length(files)+1, ft_strlen(files->rest));
	printf("String %s\n", files->rest);
	ft_strdel(&str);
	while ((check = read(fd, *line, BUF_SIZE)) && (check != -1))
	{
		(*line)[check] = '\0';
		str = files->rest;
		files->rest = ft_strjoin(files->rest, *line);
		//ft_strdel(&str);
		ft_strclr(str);
		free(str);
		if (ft_strchr(*line, '\n'))
			break ;
	}
	return (check);
}

t_file	*ft_newfile(const int fd)
{
	t_file *newfile;

	newfile = (t_file *)malloc(sizeof(t_file));
	newfile->fd = fd;
	newfile->rest = ft_strnew(0);
	newfile->next = NULL;
	return (newfile);
}

int		get_next_line(const int fd, char **line)
{
	static t_file	*files;
	t_file			*tmp;
	int				check;
	char			*str;

	tmp = files;
	if (files)
		printf("Boom %s\n", files->rest);
	if (!line || !(*line = ft_strnew(BUF_SIZE)) ||
		(fd < 0) || (fd > 10240) || (BUF_SIZE < 1))
		return (-1);
	while (files)
	{
		printf("Boom %d\n", files->fd);
		if (files->fd == fd)
			break ;
		files = files->next;
	}
	if (!files)
		files = ft_newfile(fd);
	if ((check = ft_readline(fd, line, files)) == -1)
	{
		files = tmp;
		return (-1);
	}
	str = *line;
	//printf("New string %s\n", files->rest);
	*line = ft_strsub(files->rest, 0, ft_length(files));
	//ft_strdel(&str);
	if (!((files->rest)[0]) && !(check)) {
		files = tmp;
		return (0);
	}
	files = tmp;
	return (1);
}
