/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_draw.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/01 22:28:27 by cshi              #+#    #+#             */
/*   Updated: 2016/08/01 22:28:30 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Draws solved map.
*/

void	ft_result(char *map, int wd, int counter, int i)
{
	while (map[i] != '\0')
	{
		ft_putchar(map[i]);
		i++;
		counter++;
		if (counter == wd)
		{
			ft_putchar('\n');
			counter = 0;
		}
	}
}

/*
** Returns 1 if location needs to be marked
*/

int		ft_isx(int i, int *bsq, int count)
{
	int pos;

	pos = count * bsq[2];
	if (i >= bsq[0] + pos && i <= bsq[0] + bsq[1] + pos - 1)
		return (1);
	return (0);
}

/*
** Coverts regular map to solved map.
** bsq is (start_pos, square_side_length,
** original_width, original_height)
*/

void	ft_draw(char *map, int *bsq, char fill, int i)
{
	int		count;
	int		count2;
	char	final[ft_strlen(map)];

	count = 0;
	count2 = 0;
	while (map[i] != '\0')
	{
		if (ft_isx(i, bsq, count2))
			final[i] = fill;
		else
			final[i] = map[i];
		i++;
		count++;
		if (count == bsq[2] && count2 < bsq[1] - 1)
		{
			count2++;
			count = 0;
		}
	}
	final[i] = '\0';
	ft_result(final, bsq[2], 0, 0);
}
