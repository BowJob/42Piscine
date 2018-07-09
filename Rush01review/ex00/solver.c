/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 20:36:59 by cshi              #+#    #+#             */
/*   Updated: 2016/07/24 20:37:18 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		solve(int grid[][9], int row, int col);

int		availability(int grid[][9], int row, int col, int num)
{
	int gridrowini;
	int gridcolini;
	int i;

	gridrowini = (row / 3) * 3;
	gridcolini = (col / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (num == grid[row][i])
			return (0);
		if (num == grid[i][col])
			return (0);
		if (num == grid[gridrowini + (i % 3)][gridcolini + (i / 3)])
			return (0);
		i++;
	}
	return (1);
}

int		solvezero(int grid[][9], int row, int col, int i)
{
	while (i < 9)
	{
		if (availability(grid, row, col, i + 1))
		{
			grid[row][col] = i + 1;
			if ((col + 1) < 9)
			{
				if (solve(grid, row, col + 1))
					return (1);
				else
					grid[row][col] = 0;
			}
			else if ((row + 1) < 9)
			{
				if (solve(grid, row + 1, 0))
					return (1);
				else
					grid[row][col] = 0;
			}
			else
				return (1);
		}
		i++;
	}
	return (0);
}

int		solve(int grid[][9], int row, int col)
{
	int i;

	if (row < 9 && col < 9)
	{
		if (grid[row][col] != 0)
		{
			if ((col + 1) < 9)
				return (solve(grid, row, col + 1));
			else if ((row + 1) < 9)
				return (solve(grid, row + 1, 0));
			else
				return (1);
		}
		else
		{
			i = 0;
			if (solvezero(grid, row, col, i) == 1)
				return (1);
			else
				return (0);
		}
		return (0);
	}
	else
		return (1);
}
