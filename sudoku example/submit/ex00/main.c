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
#include <stdio.h> // DELETE

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

int		main(int argc, char **argv)
{
	if (initial_checks(argc, argv) == 0)
	{
		printf("%s\n", "okay to build grid");
		// initialize grid
	}
	else
		write (1, "Error\n", 6);
	return (0);
}
