# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sslift <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 13:51:52 by sslift            #+#    #+#              #
#    Updated: 2019/06/18 15:47:28 by sslift           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = do-op
NAME_LIB = libft.a
SRC_L = ft_atoi.c ft_puts.c ft_strlen.c
SRC_O = ft_atoi.o ft_puts.o ft_strlen.o
SRC = do_op.c funcs.c

all: $(NAME)

$(NAME):
	@gcc -c $(SRC_L)
	@ar rc $(NAME_LIB) $(SRC_O)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -L. -lft

clean:
	@/bin/rm -f *.o $(NAME_LIB)

fclean: clean
	@/bin/rm -f $(NAME)

re:fclean all
