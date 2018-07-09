/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: karvin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/17 11:47:35 by karvin            #+#    #+#             */
/*   Updated: 2016/07/17 13:20:13 by karvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
int		ft_iscorner(int ix, int iy, int x, int y);

void	rush(int x, int y)
{
	int ix;
	int	iy;

	ix = 0;
	iy = 0;
	while (iy < y)
	{
		while (ix < x)
		{
			if (ft_iscorner(ix, iy, x, y) == 1)
				ft_putchar('o');
			else if (iy == 0 || iy == y - 1)
				ft_putchar('-');
			else if (ix == 0 || ix == x - 1)
				ft_putchar('|');
			else
				ft_putchar(' ');
			ix++;
		}
		ix = 0;
		ft_putchar('\n');
		iy++;
	}
}

int		ft_iscorner(int ix, int iy, int x, int y)
{
	if ((ix == 0 && iy == 0) || (ix == 0 && iy == y - 1))
		return (1);
	if ((ix == x - 1 && iy == 0) || (ix == x - 1 && iy == y - 1))
		return (1);
	return (0);
}
