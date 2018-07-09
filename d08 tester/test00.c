/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 21:08:36 by cshi              #+#    #+#             */
/*   Updated: 2016/07/23 21:41:51 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

char **ft_split_whitespaces(char *str);

void ft_putchar(char c)
{
	write (1, &c, 1);
}

int main (int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("One argument, fool!\n");
		return (0);
	}

	char **test;
	test = ft_split_whitespaces(argv[1]);

	int x = 0;
	int y = 0;

	while (test[y])
	{
		x = 0;
		while (test[y][x] != '\0')
		{
			ft_putchar(test[x][y]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}

}
