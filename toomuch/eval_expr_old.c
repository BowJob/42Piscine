/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 18:21:47 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 18:28:23 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"



int	ft_solve(char *c, int i, int lv1, int lv2)
{
	while (c[i] != '\0')
	{
		if (ft_lv1(c[i]) && lv1 = 0)
			lv1 = i;
		if (ft_lv2(c[i]) && lv2 = 0)
			lv2 = i;
		i++;
	}
	if (lv2 != 0)
		//do lv two operations
	else if (lv1 != 0)
		//do lv two operations
	else

}


/*
** Returns 1 if string has bracket.
*/

int ft_hasbrk(char *c, int i)
{
	while (c[i] != '\0')
	{
		if (ft_brkchk(c[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
** Returns 1 if string has bracket.
*/

int ft_hasbrk(char *c, int i)
{
	while (c[i] != '\0')
	{
		if (ft_brkchk(c[i]))
			return (1);
		i++;
	}
	return (0);
}

int eval_expr(char *str)
{
	int result;

	if (!ft_hasbrk(str, 0))
	{
		//solve by order of operations

	}
	else
	{
		//relocate to inner most equation
	}
	return (result);
}
