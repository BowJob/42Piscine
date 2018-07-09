/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chkin.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/30 20:23:56 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 04:35:52 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Checks if map only has key characters
** Only empty and obstacle is accepted
** Returns 1 if valid, 0 if invalid
** ft_chkfk applies this function
*/

int	ft_sanitycheck(char *key, char map)
{
	int len;

	len = ft_strlen(key);
	if (map == key[len - 3] || map == key[len - 2])
		return (1);
	if (map == '\n')
		return (1);
	return (0);
}

/*
** Checks if the map has anything other than
** what is specified in the key
** Applies ft_sanitycheck
** Also returns 0 if there is no open space
*/

int	ft_chkfk(char *key, char *map, int m, int open)
{
	while (map[m] != '\0')
	{
		if (!ft_sanitycheck(key, map[m]))
			return (0);
		if (map[m] == key[ft_strlen(key) - 3])
			open++;
		m++;
	}
	if (open == 0)
		return (0);
	return (1);
}

/*
** Returns 1 if each line is the same width.
** 1 liner auto pass
** wd2 is set to the length of first line
** if wd2 is 0, it means that wd is only 1 line
** then we compare each line with the next
** to see if they are the same length
*/

int	ft_chkwd(char *map, int i, int wd1, int wd2)
{
	while (map[i] != '\0')
	{
		if (map[i] == '\n')
			wd2++;
		i++;
	}
	if (wd2 == 0)
		return (1);
	i = 0;
	wd2 = 0;
	while (map[i] != '\0')
	{
		wd1++;
		if (map[i] == '\n')
		{
			if (wd2 != 0 && wd2 != wd1)
				return (0);
			wd2 = wd1;
			wd1 = 0;
		}
		i++;
	}
	return (1);
}

/*
** Applies above checks and more
** In the order of resource usage intensity
** First checks if key or map is 0 in length
** Second checks if width of each line is the same
** Third checks if height of map matches key
** Fourth checks if there are bad inputs
** Fourth also checks if there are any open spaces
*/

int	ft_chkin(char *key, char *map)
{
	if (ft_strlen(key) == 0 || ft_strlen(map) == 0)
		return (0);
	if (!ft_chkwd(map, 0, 0, 0))
		return (0);
	if (!(ft_htnwd(map, 0, 0, 2) == ft_atoi(key, 0, 0, 0)))
		return (0);
	if (!ft_chkfk(key, map, 0, 0))
		return (0);
	return (1);
}
