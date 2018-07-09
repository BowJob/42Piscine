/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 16:44:51 by cshi              #+#    #+#             */
/*   Updated: 2016/07/30 21:59:43 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H
# include <stdlib.h>
# include <unistd.h>
# define STR_SIZE 2000000
# define OP_SIZE 200000

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strcmp(char *s1, char *s2);
int		ft_strlen(char *str);
int		findcrap(char c);
int		ft_atoi(char *str, int i, int total, int negative);
int		ft_numchk(char c);
int		ft_symchk(char c);
int		ft_opchk(char c);
int		ft_brkchk(char c);
int		ft_lftbrk(char *c);
int		ft_math(int a, int b, char op);
void	ft_putnbr(int nb);
int		eval_expr(char *str);
int		ft_moremath(int *holder, char *op, int count);
int		ft_priority(char op);

#endif
