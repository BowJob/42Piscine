/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_puzzle.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:53:34 by cfredric          #+#    #+#             */
/*   Updated: 2016/07/24 11:56:48 by cfredric         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INITIALIZE_PUZZLE_H
# define INITIALIZE_PUZZLE_H

int g_grid[9][9] =
{{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0},
	{0, 0, 0, 0, 0, 0, 0, 0, 0}};

void	construct_grid(char **argv)
{
	int argv_i;
	int string_i;

	argv_i = 0;
	while (argv_i < 8)
	{
		string_i = 0;
		while (string_i < 8)
		{
			if (!(argv[argv_i + 1][string_i] == '.'))
			{
				g_grid[argv_i][string_i] = argv[argv_i + 1][string_i] - '0';
			}
			string_i++;
		}
		argv_i++;
	}
}

#endif
