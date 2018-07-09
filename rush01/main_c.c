/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_c.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 21:54:16 by cshi              #+#    #+#             */
/*   Updated: 2016/07/24 22:14:22 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int 	findcrap(char c);
int		solve(int grid[][9], int row, int col);
int		ft_atoi(char *str)
{
	int i;
	int total;
	int negative;

	while (str[i] == '-' || findcrap(str[i]) == 1)
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ((str[i] - '0') <= 9 && (str[i] - '0') >= 0)
	{
		total = total * 10;
		total = total + (str[i] - '0');
		i++;
	}
	if (negative)
		total = total * -1;
	return (total);
}

int findcrap(char c)
{
	if (c == '\'' || c == '\"' || c == '\?' || c == '\\')
		return (1);
	if (c == '\a' || c == '\b' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}


int main(int argc, char **argv)
{
	int i;
	int j;
	int grid[9][9];
	i = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			grid[i][j] = argv[i][j];
			j++;
		}
		i++;
	}

	if(solve(grid, 0, 0))
	{
		i = 1;
		while (i < 10)
		{
			j = 1;
			while (j < 10)
			{
				printf(" %d", grid[i-1][j-1]);
				j++;
			}
			write (1, "\n", 1);
			i++;
		}
	}
	else
	{
		write (1, "Error\n", 6);
	}
	return (0);
}
