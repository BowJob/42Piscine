/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvo <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:10:49 by kvo               #+#    #+#             */
/*   Updated: 2016/07/24 11:10:51 by kvo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		initial_checks(int argc, char **argv)
{
	int		i;
	char	**check;

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

void	print_grid(void)
{
	int row;
	int col;
	int val;

	row = 1;
	while (row < 10)
	{
		col = 1;
		while (col < 10)
		{
			val = (g_grid[row - 1][col - 1]) + '0';
			write(1, &val, 1);
			if (col != 9)
				write(1, " ", 1);
			col++;
		}
		write(1, "\n", 1);
		row++;
	}
}

int		main(int argc, char **argv)
{
	if (initial_checks(argc, argv) == 0)
	{
		construct_grid(argv);
		if (solve(g_grid, 0, 0))
		{
			print_grid();
		}
		else
			write(1, "Error\n", 6);
		return (0);
	}
	else
		write(1, "Error\n", 6);
	return (0);
}
