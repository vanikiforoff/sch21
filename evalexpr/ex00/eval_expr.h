/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/22 21:40:08 by sslift            #+#    #+#             */
/*   Updated: 2019/06/23 07:28:34 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EVAL_EXPR_H
# define EVAL_EXPR_H

# include <stdlib.h>
# include <unistd.h>

typedef	struct		s_list
{
	struct s_list	*next;
	void			*type;
	int				data;
	int				status;
}					t_list;

t_list				*ft_create_elem(int	data, void *type, int status);
void				ft_list_push_back(t_list **begin_list,
		int	data, void *type, int status);
int					ft_atoi(char *str);
t_list				*list_expr(char *str);
int					ft_calc(int left, int right, char op);
int					sum(int a, int b);
int					sub(int a, int b);
int					divid(int a, int b);
int					mod(int a, int b);
int					tim(int a, int b);
int					eval_simple(t_list **expr);
int					find_br(t_list *begin_list);
int					find_br_data(t_list *expr, int br);
int					find_br_end(t_list *expr, int br);
int					ft_if_brace_bigger(t_list *expr, int br);
int					ft_strcmp(void *s1, void *s2);
t_list				*ft_list_at(t_list *begin_list, int nbr);
t_list				*ft_create_brace_list(t_list *expr, int left, int right);
int					ft_strcmp(void *s1, void *s2);
int					ft_list_size(t_list *begin_list);
int					find_op(t_list *begin_list, int stat);
int					find_num(t_list *expr, int nbr);
int					if_br(char c);
int					if_op(char c);
int					if_num(char c);
void				ft_clean(t_list **expr);
int					ft_if_status0(t_list *expr);
void				super_clean(t_list **expr);
int					eval_expr(char *str);
void				ft_putchar(char c);
void				ft_putnbr(int nb);

#endif
