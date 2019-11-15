/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sslift <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/18 13:43:22 by sslift            #+#    #+#             */
/*   Updated: 2019/06/18 15:16:49 by sslift           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int		ft_atoi(char *str);
void	ft_putstr(char *str);
int		ft_putchar(char c);
void	ft_putnbr(int nb);
int		ft_strlen(char *str);
int		sum(int a, int b);
int		sub(int a, int b);
int		div(int a, int b);
int		mod(int a, int b);
int		tim(int a, int b);

#endif
