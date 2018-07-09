/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 01:43:46 by cshi              #+#    #+#             */
/*   Updated: 2016/07/24 09:58:28 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int star(char *s1, char *s2);

int	ft_sl(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

//int ft_skip(char * str, int i)
//{
//	int fs;

//	fs = 0;
//	while (str[i] != '\0' && fs == 0)
//		((str[i] == '*') ? i++ : fs = i);
//	return (i);
//}

int	match(char *s1, char *s2)
{
	int i;
	int x;
	int y;

	i = 0;
	x = 0;
	y = 0;
	if (ft_sl(s2) == 0)
		return (0);
	char str[ft_sl(s1) + ft_sl(s2) + 2];

	while (s2[x] != '\0')
	{
		if (s2[x] == '*')
			star(s1, s2);
		x++;
	}

	x = 0;
	while (s2[x] != '\0')
		((s2[x] != '*') ? str[y++] = s2[x++] : x++);
	str[y] = '\0';

	if (ft_sl(str) == 0)
		return (1);
	x = 0;
	y = 0;
	while (str[x] != '\0' && s1[y] != '\0')
	{
		if (str[x] == s1[y])
			x++;
		y++;
	}
	if (str[x] == '\0')
		return (1);
	return (0);
}

int star(char *s1, char *s2)
{
	if (!*s1 && !*s2)
		return (1);
	else if (*s1 == *s2 && *s1 != '*')
		return (match(s1 + 1, s2 + 1));
	else if (*s1 == '*' && *s2 == '*')
		return (match(s1 + 1, s2));
	else if (*s2 == '*' && !*s1)
		return (match(s1, s2 + 1));
	else if (*s2 == '*' && *s2 && *s1)
		return (match(s1, s2 + 1) || match(s1 + 1, s2));
	else
		return (0);
}