/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 17:12:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/30 21:59:16 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Prints error message
*/

int 	ft_error(void)
{
	write(2, "map error\n", 10);
	return (0);
}

/*
** Separates STR into key and map
** Flags error if key is not 4 characters
** Sends key/map to tests and if passed
** Sends key/map to solver
** (Solver will call display)
*/

int		ft_post(char *c, int k, int m)
{
	char	key[ft_strlen(c)];
	char	map[ft_strlen(c)];

	while (c[k] != '\n')
	{
		key[k] = c[k];
		k++;
	}
	k++;
	while (c[k] != '\0')
	{
		map[m] = c[k];
		k++;
		m++;
	}
	map[m] = '\0';
	if (!ft_chkin(key, map))
	{
		ft_putstr("Map here\n");
		return (ft_error());
	}
	ft_solve(key, map, 0, 0);
	return (0);
}

/*
** Main for reading from STDIN
*/

int		main_stdin(int i)
{
	char	str[STR_SIZE];
	char	buf[BUF_SIZE];

	while (read(0, buf, 1))
	{
		if ((i + 1000) > STR_SIZE)
			return (ft_error());
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	ft_post(str, 0, 0);
	return (0);
}

/*
** Main for reading from ARGV
*/

int		main_argv(char *argv, int i)
{
	int		fd;
	char	str[STR_SIZE];
	char	buf[BUF_SIZE];

	fd = open(argv, O_RDONLY);
	if (fd == -1)
		return (ft_error());
	while (read(fd, buf, 1))
	{
		if ((i + 1000) > STR_SIZE)
			return (ft_error());
		str[i] = buf[0];
		i++;
	}
	str[i] = '\0';
	if (close(fd) == -1)
		return (ft_error());
	ft_post(str, 0, 0);
	return (0);
}

/*
** Main for choosing ARGV or STDIN
*/

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc == 1)
		return (main_stdin(0));
	while (i < argc)
	{
		main_argv(argv[i], 0);
		i++;
	}
	return (0);
}
