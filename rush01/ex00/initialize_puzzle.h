/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize_puzzle.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 11:53:34 by cfredric          #+#    #+#             */
/*   Updated: 2016/07/24 22:30:08 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	INITIAL_PUZZLE_H
# define INITIAL_PUZZLE_H
 int grid [9][9] = {{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0},
 				{0, 0, 0, 0, 0, 0, 0, 0, 0}};
 // this function should only be run after all of the checks have been passed
void	construct_grid(char **argv)
{
	int argv_index;
	int string_index;

	argv_index = 0;
	while (argv_index < 8)
	{
		string_index = 0;
		while (string_index < 8)
		{
			if (!(argv[argv_index + 1][string_index] == '.'))
			{
				grid[argv_index][string_index] = argv[argv_index + 1][string_index] - '0';
			}
			string_index++;
		}
		argv_index++;
	}
}

// check for boxes and columns
#endif
