# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sslift <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/20 16:31:58 by sslift            #+#    #+#              #
#    Updated: 2019/06/20 16:37:23 by sslift           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file
SRC = ft_display_file.c ft_puts.c
SRC_O = ft_display_file.o ft_puts.o

all: $(NAME)

$(NAME):
	@gcc -c $(SRC)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC_O)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
