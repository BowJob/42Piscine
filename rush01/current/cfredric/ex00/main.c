/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:10:49 by kvo               #+#    #+#             */
/*   Updated: 2016/07/24 22:39:44 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>

int		initial_checks(int argc, char **argv)
{
	int i;
	char **check;

	check = argv;
	if (argc != 10)
		return (1);
	i = 1;
	while (i < argc)
	{
		if (check_rows(argv[i]) == 1)
			return (1);
		i++;
	}
	if (check_num_clues(check) < 17)
			return (1);
	return (0);
}

int		construct_grid()
{
	int i;
	int j;
	int grid [N][N];

	i = 0;
	j = 0;
	while (i < N)
	{
		while (j < N)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}

void	prepare_grid(char **argv)
{
	int i;
	int j;
	int argv_index;
	int string_index;
	int grid [N][N];

	i = 0;
	j = 0;
	while (i < N)
	{
		while (j < N)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	grid = construct_grid();
	argv_index = 0;
	while (argv_index < 8)
	{
		string_index = 0;
		while (string_index < 8)
		{
			if (!(argv[argv_index + 1][string_index] == '.'))
				grid[argv_index][string_index] = argv[argv_index + 1][string_index] - '0';
			string_index++;
		}
		argv_index++;
	}
}

int		main(int argc, char **argv)
{
	int row;
	int col;

	row = 1;
	if (initial_checks(argc, argv) == 0)
	{
		preapre_grid(argv);
		if(solve(grid, 0, 0)) // XXX: no global variables!!!!! :'(
		{
			while (row < 10)
			{
				col = 1;
				while (col < 10)
				{
					printf(" %d", grid[row - 1][col - 1]);
					col++;
				}
				printf("\n");
				row++;
			}
		}
		else
			write (1, "Error\n", 6);
		return 0;
	}
	else
		write (1, "Error\n", 6);
	return (0);
}
