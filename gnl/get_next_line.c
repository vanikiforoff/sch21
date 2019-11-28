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
	//printf("%d\n", i);
	return (i);
}

int		ft_readline(const int fd, char **line, t_file *files)
{
	int check;
	char *str;

	str = files->rest;
	//printf("String %s %d\n", str, ft_length(files)+1);
	files->rest = ft_strsub(files->rest, ft_length(files)+1, ft_strlen(files->rest));
	//printf("String %s\n", files->rest);
	//ft_strdel(&str);
	while ((check = read(fd, *line, BUF_SIZE)) && (check != -1))
	{
		(*line)[check] = '\0';
		str = files->rest;
		files->rest = ft_strjoin(files->rest, *line);
		//ft_strdel(&str);
		//ft_strclr(str);
		//free(str);
		if (ft_strchr(*line, '\n'))
			break ;
	}
	//printf("String %s %d\n", files->rest, ft_length(files)+1);
    return (check);
}

t_file	*ft_newfile(t_file *files, const int fd)
{
	t_file *newfile;

	newfile = (t_file *)malloc(sizeof(t_file));
	newfile->fd = fd;
	newfile->rest = ft_strnew(0);
	newfile->next = NULL;
	newfile->prev = files;
	newfile->base = (files->base + 1);
	//files->next = newfile;
	files = newfile;
	return (files);
}

t_file  *ft_filebase(t_file *files) {
    t_file  *filebase;

    if (!files) {
        filebase = (t_file *)malloc(sizeof(t_file));
        filebase->next = NULL;
        filebase->prev = NULL;
        filebase->base = 0;
        filebase->rest = ft_strnew(0);
        filebase->fd = -1;
        files = filebase;}
    else
    {
        while (files->base != 0) {
            printf("Inside %s\n", files->rest);
            files = files->prev;
            //printf("Inside %s\n", files->next->rest);
        }
    }
    //printf("Stop\n");
    return (files);
}

int		get_next_line(const int fd, char **line)
{
	static t_file	*files;
	//t_file			*tmp;
	int				check;
	char			*str;

	files = ft_filebase(files);
	//printf("Boo\n");
	if (!line || !(*line = ft_strnew(BUF_SIZE)) ||
		(fd < 0) || (fd > FD_MAX) || (BUF_SIZE < 1))
		return (-1);

	while (files->next)
	{
	    if (files->next->fd == fd) {
	        files = files->next;
	        break ;}
	    files = files->next;
	}
	//printf("%d\n", files->base);
	if (!files->next) {
		files->next = ft_newfile(files, fd);
		files = files->next;
		//printf("Yes ");
	}
	if ((check = ft_readline(fd, line, files)) == -1)
	{
		return (-1);
	}
	str = *line;
	//printf("New string %d %d %s \n", files->base, files->prev->base, files->rest);
	*line = ft_strsub(files->rest, 0, ft_length(files));
	//printf("Boo %s\n", files->rest);
	//ft_strdel(&str);
	if (!((files->rest)[0]) && !(check)) {
	    printf("Boo %s ", (files->rest));
		//files = tmp;
		return (0);
	}
	//printf("%d %d\n", files->base, files->prev->base);
	//files = tmp;
	return (1);
}
