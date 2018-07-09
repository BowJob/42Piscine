/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 21:53:53 by cshi              #+#    #+#             */
/*   Updated: 2016/07/28 23:32:09 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc != 2)
	{
		if (argc < 2)
			write(1, "File name missing.\n", 19);
		if (argc > 2)
			write(1, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(1, "Why would you feed me a folder?!\n", 33);
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	write(1, &buf, ret);
	close(fd);
	return (0);
}
