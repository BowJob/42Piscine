/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mthchk.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 17:49:41 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 17:49:43 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Returns 1 if spacing between numbers and opearators are valid.
*/

int ft_rmchk(char *c)
{
	if (ft_numchk(c[i])
	{
		if (c[i - 1] == ' ' || c[i + 1] == ' '|| c[i + 1] == '\0')
			return (1);
	}
	if (ft_symchk(c[i])
	{
		if (c[i - 1] == ' ' || c[i + 1] == ' ')
			return (1);
		else if (c[i] == '-' && c[i + 1])
			return (1);
	}
	return (0);
}

/*
** Runs rmchk. Returns 1 if passes.
*/

int ft_spchk(char *c, int i)
{
	while (c[i] != '\0')
	{
		if (!ft_rmchk(c[i]))
			return (0);
		i++;
	}
	return (1);
}

int ft_mthchk(char *c)
{
	if (!ft_spchk(c) == 0
		)
	{
		write(2, "You fed me nothing :(\n", 22);
		return (0);
	}
	return (1);
}