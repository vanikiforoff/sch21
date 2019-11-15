# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sslift <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/06/23 07:30:52 by sslift            #+#    #+#              #
#    Updated: 2019/06/23 07:37:12 by sslift           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = eval_expr
SRC = braces.c conditions.c cleanser.c ft_atoi.c ft_create_elem.c ft_calc.c ft_list_push_back.c ft_putnbr.c eval_expr.c ft_for_lists.c main.c funcs.c list_expr.c
SRC_O = braces.o conditions.o cleanser.o ft_atoi.o ft_create_elem.o ft_calc.o ft_list_push_back.o ft_putnbr.o eval_expr.o ft_for_lists.o main.o funcs.o list_expr.o

all: $(NAME)

$(NAME):
	@gcc -c $(SRC)
	@gcc -Wall -Wextra -Werror -o $(NAME) $(SRC_O)

clean:
	@/bin/rm -f *.o

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all
