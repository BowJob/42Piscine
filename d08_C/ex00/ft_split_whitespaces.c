/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whilespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/20 21:34:46 by cshi              #+#    #+#             */
/*   Updated: 2016/07/23 21:51:18 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int		ft_issep(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	printf ("i is equals %d\n", i);
	return (i);
}

int		ft_wl(char *str, int i)
{
	int total;
	printf("str is %s\n", str);
	total = 0;
	while (ft_issep(str[i]) == 0 && str[i])
	{
		total++;
		i++;
	}
	printf("world length is %d\n", total);
	return (total);
}

char	**ft_split_whitespaces(char *str)
{
	int		x;
	int		y;
	int		z;
	char	**dest;

	if ((dest = malloc(sizeof(char*) * (ft_strlen(str) + 1))) == NULL)
		return (NULL);
	printf("memory allocation for dest succeeded.\n");
	x = 0;
	y = 0;
	while (str[x])
	{
		while (str[x] && ft_issep(str[x] == 1))
			x++;
		if (str[x])
		{
			z = 0;
			if ((dest[y] = malloc(sizeof(char) * (ft_wl(str, x) + 1))) == NULL)
				return (NULL);
			while (ft_issep(str[x]) == 0 && str[x])
			{
				dest[y][z++] = str[x++];
				printf("reached double incrementing place\n"); 
			}
			dest[y++][z] = '\0';
		}
	}
	dest[y] = NULL;
	return (dest);
}
