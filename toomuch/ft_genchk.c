/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chks.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 09:38:19 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 09:38:27 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Returns 1 if input is a valid num or symbol.
*/

int	ft_chkchr(char c)
{
	while (c[i] != '\0')
	{
		if (ft_numchk(c[i]) || ft_symchk(c[i]))
			return (1);
		i++;
	}
	return (0);
}

/*
** Runs chkchr. Returns 1 if passes.
*/

int ft_filter(char *c, int i)
{
	while (c[i] != '\0')
	{
		if (!ft_chkchr(c[i]))
			return (0);
		i++;
	}
	return (1);
}

/*
** returns 1 if the left brackets is equal to right brackets.
*/

int ft_bchk(char *c, int i, int lb, int rb)
{
	while (c[i] != '\0')
	{
		if (c[i] == '(')
			lb++;
		if (c[i] == ')')
			rb++;
		i++;
	}
	if (lb == rb)
		return (1);
	return (0);
}

/*
** Returns 1 if numbers is 1 more than operators.
** Returns 2 if there are no operators.
*/

int ft_obvchk(char *c, int i, int num, int op)
{
	while (c[i] != '\0')
	{
		if (ft_numchk(c[i]))
			num++;
		if (ft_opcheck(c[i])
			op++;
		i++;
	}
	if (op == 0)
		return (2);
	op++;
	if (num == op)
		return (1);
	return (0);
}

/*
** Returns 1 if general tests passes.
*/

int ft_chks(char *c)
{
	if (ft_strlen(c) == 0)
	{
		write(2, "You fed me nothing :(\n", 22);
		return (0);
	}
	if (!ft_filter(c, 0))
	{
		write(2, "You fed me poison! :[\n", 22);
		return (0);
	}
	if (!ft_bchk(c, 0, 0, 0)
	{
		write(2, "Uneven matching brackets! :[\n", 29);
		return (0);
	}
	if (!ft_obvchk(c, 0, 0, 0)
	{
		write(2, "Impossible or badly formatted equation! :[\n", 29);
		return (0);
	}
	return (1);
}