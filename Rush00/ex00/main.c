/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 11:46:22 by karvin            #+#    #+#             */
/*   Updated: 2016/07/31 13:24:38 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c);

void	rush(int x, int y);

void	ft_corner(int ix, int iy, int x, int y);

int		ft_atoi(char *str);

int		main(int argc, char **argv)
{
	if (argc != 3)
		return (0);
	int x = atoi(argv[1]);
	int y = atoi(argv[2]);
	rush(x, y);
	return (0);
}
