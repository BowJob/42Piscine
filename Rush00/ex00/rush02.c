/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 17:02:01 by karvin            #+#    #+#             */
/*   Updated: 2016/07/17 20:45:16 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_corner(int ix, int iy, int x, int y)
{
	if (ix == 0 && iy == 0)
		ft_putchar('A');
	else if (ix == 0 && iy == (y - 1))
		ft_putchar('C');
	else if (ix == (x - 1) && iy == 0)
		ft_putchar('A');
	else if (ix == (x - 1) && iy == (y - 1))
		ft_putchar('C');
	else if (ix == 0 || iy == 0 || ix == (x - 1) || iy == (y - 1))
		ft_putchar('B');
	else
		ft_putchar(' ');
}

void	rush(int x, int y)
{
	int		ix;
	int		iy;

	iy = 0;
	while (iy < y)
	{
		ix = 0;
		while (ix < x)
		{
			ft_corner(ix, iy, x, y);
			ix++;
		}
		ft_putchar('\n');
		iy++;
	}
}
