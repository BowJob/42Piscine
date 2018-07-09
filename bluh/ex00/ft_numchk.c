/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numcheck.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/31 17:15:29 by cshi              #+#    #+#             */
/*   Updated: 2016/07/31 17:15:33 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Returns 1 if input is a number.
*/

int		ft_numchk(char c)
{
	if (c == '0' || c == '1' || c == '2' || c == '3')
		return (1);
	if (c == '4' || c == '5' || c == '6' || c == '7')
		return (1);
	if (c == '8' || c == '9')
		return (1);
	return (0);
}

/*
** Returns 1 if input is a valid non number symbol.
*/

int		ft_symchk(char c)
{
	if (c == '(' || c == ')' || c == '+' || c == '-')
		return (1);
	if (c == '*' || c == '/' || c == '%' || c == ' ')
		return (1);
	return (0);
}

/*
** Returns 1 if input is an executable operator.
*/

int		ft_opchk(char c)
{
	if (c == '+' || c == '-')
		return (1);
	if (c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

/*
** Returns 1 if input is a bracket
*/

int		ft_brkchk(char c)
{
	if (c == '(' || c == ')')
		return (1);
	return (0);
}

/*
** Returns position of innermost (, left side first
*/

int		ft_lftbrk(char *c)
{
	int i;
	int tmp;

	i = 0;
	tmp = 0;
	while (c[i] != '\0' && c[i] != ')')
	{
		if (c[i] == '(')
			tmp = i;
		i++;
	}
	return (tmp);
}
