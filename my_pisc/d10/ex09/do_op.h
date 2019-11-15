/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 18:44:32 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 22:14:35 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

typedef struct	s_opp
{
	char	*operator;
	int		(*f)(int, int);
}				t_opp;

int				ft_atoi(char *str);
void			ft_putstr(char *str);
int				ft_putchar(char c);
void			ft_putnbr(int nb);
int				ft_strlen(char *str);
int				ft_strcmp(char *s1, char *s2);
int				ft_sub(int a, int b);
int				ft_add(int a, int b);
int				ft_mul(int a, int b);
int				ft_div(int a, int b);
int				ft_mod(int a, int b);
int				ft_usage(int a, int b);

#endif
