/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 21:53:53 by cshi              #+#    #+#             */
/*   Updated: 2016/07/28 23:35:37 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int	main(int argc, char **argv)
{
	int		i;
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc < 2)
	{
		while ((ret = read(0, buf, BUF_SIZE)) != 0)
			write(1, &buf, ret);
	}
	i = 1;
	while (i < argc)
	{
		fd = open(argv[i], O_RDONLY);
		if (fd == -1)
		{
			write(1, "Why would you feed me a folder?!\n", 33);
			return (1);
		}
		ret = read(fd, buf, BUF_SIZE);
		write(1, &buf, ret);
		close(fd);
		i++;
	}
	return (0);
}
