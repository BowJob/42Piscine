/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/19 00:39:54 by cshi              #+#    #+#             */
/*   Updated: 2016/07/19 23:48:34 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_findcrap(char c)
{
	if (c == '\'' || c == '\"' || c == '\?' || c == '\\')
		return (1);
	if (c == '\a' || c == '\b' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(char *str, int i, int total, int negative)
{
	while (str[i] == '-' || ft_findcrap(str[i]) == 1)
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while ((str[i] - '0') <= 9 && (str[i] - '0') >= 0)
	{
		total = total * 10;
		total = total + (str[i] - '0');
		i++;
	}
	if (negative >= 1)
		total = total * -1;
	return (total);
}
