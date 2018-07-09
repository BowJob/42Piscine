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
# include <fcntl.h>
# define BUF_SIZE 4096
# define STR_SIZE 2000000

void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_result(char *map, int wd, int counter, int i);
int		ft_isx(int i, int *bsq, int count);
void	ft_draw(char *map, int *bsq, char fill, int i);
int		ft_post(char *c, int k, int m);
int		ft_sanitycheck(char *key, char map);
int		ft_chkfk(char *key, char *map, int m, int open);
int		ft_chkwd(char *map, int i, int wd1, int wd2);
int		ft_chkin(char *key, char *map);
int		ft_htnwd(char *map, int newl, int width, int mode);
void	ft_solve(char *key, char *map, int wd, int i);
int		ft_atoi(char *str, int i, int total, int negative);
int		ft_findcrap(char c);

#endif
