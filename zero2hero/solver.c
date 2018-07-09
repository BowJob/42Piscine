/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/02 21:16:43 by cshi              #+#    #+#             */
/*   Updated: 2016/08/02 21:16:45 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** checks if the cell in question is a leading number
*/

int ft_isnew(int i, int wd, int ht)
{
	while(ht > 0)
	{
		if (i == ht * wd)
			return (1);
		ht--;
	}
	return (0);
}

/*
** Returns max possible square which top left corner
** is at position i;
** Returns 0 if position i = obstacle
*/

int ft_size(char *key, char *str, int bsq[5], int i)
{
	int count;
	int nextcorner;
	int x;
	int y;
	int len;

	count = 1;
	nextcorner = i + bsq[2] + count;
	len = ft_strlen(key);
	if (str[i] == key[(len - 2)])
		return (0);
	while (nextcorner != key[(len - 2)] && !ft_isnew(nextcorner, bsq[2], bsq[3])
		&& nextcorner < bsq[2] * bsq[3])
	{
		x = i + bsq[2] * count;
		while (x < nextcorner)
		{
			if (str[x] == key[(len - 2)])
				return count;
			x++;
		}
		y = count + i;
		while (y < nextcorner)
		{
			if (str[y] == key[(len - 2)])
				return count;
			y = y + bsq[2];
		}
		count++;
		nextcorner = i + count * bsq[2] + count;
	}
	count--;
	return (count);
}

/*
** Finds the bsq and calls draw
** Bsq stores (starting point, side length
** map width and map height)
*/

void ft_find(char *key, char *str, int wd, int ht)
{
	int bsq[5];
	int i;
	int holder;

	i = 0;
	holder = 0;
	bsq[0] = 0;
	bsq[1] = 0;
	bsq[2] = wd;
	bsq[3] = ht;
	while (str[i] != '\0')
	{
		holder = ft_size(key, str, bsq, i);
		if (holder > bsq[1])
		{
			bsq[1] = holder;
			bsq[0] = i;
		}
		i++;
	}
	ft_draw(str, bsq, key[ft_strlen(key) - 1], 0);
}

/*
** Cleans map into a single string with no newlines
** then uses leftover i and j as storage for wd and ht
*/

void ft_solve(char *key, char *map, int i, int j)
{
	char	str[ft_strlen(map)];

	while (map[i] != '\0')
	{
		if(map[i] != '\n')
		{
			str[j] = map[i];
			j++;
		}
		i++;
	}
	str[j] = '\0';
	i = ft_htnwd(map, 0, 0, 1);
	j = ft_htnwd(map, 0, 0, 2);
	ft_find(key, str, i, j);
}