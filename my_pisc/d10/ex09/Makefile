# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sslift <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/18 20:15:47 by sslift            #+#    #+#              #
#    Updated: 2019/06/18 21:21:15 by sslift           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_advanced_do-op
NAME_LIB = libft.a
SRC_L = ft_atoi.c ft_puts.c ft_strlen.c ft_strcmp.c
SRC_O = ft_atoi.o ft_puts.o ft_strlen.o ft_strcmp.o
SRC = do_op.c func.c ft_usage.c

all: $(NAME)

$(NAME):
	@gcc -c $(SRC_L)
	@ar rc $(NAME_LIB) $(SRC_O)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC) -L. -lft

clean:
	@/bin/rm -f *.o $(NAME_LIB)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
