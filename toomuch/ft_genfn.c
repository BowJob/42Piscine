/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_genfnc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 17:26:35 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 17:26:37 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

/*
** Takes and writes a char
*/

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

/*
** Takes and writes a string
*/

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

/*
** Compares two strings. returns 0 if same
*/

int		ft_strcmp(char *s1, char *s2)
{
	int i;
	int match;

	i = 0;
	while (1)
	{
		match = 0;
		if (s1[i] == s2[i])
			match = 1;
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if (!match)
			return (s1[i] - s2[i]);
		i++;
	}
}

/*
** Returns length of string
*/

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	return (i);
}