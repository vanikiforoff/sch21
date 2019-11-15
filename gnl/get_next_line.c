/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <sslift@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 17:25:55 by sslift            #+#    #+#             */
/*   Updated: 2019/11/15 21:21:22 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

t_file	*ft_lstat(t_file *lst, int fd)
{
	int i;

	while (lst -> next)
	{
		if (lst->fd == fd)
			return lst;
		lst = lst->next;
	}
	return (NULL);
}

int		get_next_line(const int fd, char **line)
{
	char			buf[BUF_SIZE + 1];
	int				ret;
	static t_file	*files;
	t_file			*file;

	if ((file = ft_lstat(files, fd))
	{
		
	}
}
