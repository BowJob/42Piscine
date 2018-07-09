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

int		ft_priority(char op)
{
	if (op == '+')
		return (1);
	if (op == '-')
		return (1);
	if (op == '*')
		return (2);
	if (op == '/')
		return (2);
	if (op == '%')
		return (2);
	return (0);
}

int		ft_math(int a, int b, char op)
{
	if (op == '+')
		return (a + b);
	if (op == '-')
		return (a - b);
	if (op == '*')
		return (a * b);
	if (op == '/')
	{
		if (b == 0)
			exit(0);
		return (a / b);
	}
	if (op == '%')
	{
		if (b == 0)
			exit(0);
		return (a % b);
	}
	return (0);
}

int		ft_moremath(int *holder, char *op, int count)
{
	int tmp;

	if (count == 0)
		return (ft_math(holder[0], holder[1], op[0]));
	if (count == 1)
	{
		if (ft_priority(op[0]) < ft_priority(op[1]))
		{
			tmp = ft_math(holder[1], holder[2], op[1]);
			return (ft_math(holder[0], tmp, op[0]));
		}
		else
		{
			tmp = ft_math(holder[0], holder[1], op[0]);
			return (ft_math(tmp, holder[2], op[1]));
		}
	}
	return (0);
}

int		ft_basic(char *c, int i, int j, int k)
{
	int		holder[STR_SIZE];
	char	op[OP_SIZE];

	while (c[i] != '\0')
	{
		if (ft_numchk(c[i]))
		{
			holder[j] = ft_atoi(c, i, 0, 0);
			j++;
		}
		if (ft_opchk(c[i]))
		{
			op[k] = c[i];
			k++;
		}
		i++;
	}
	return (ft_moremath(holder, op, ft_strlen(op)));
}

int		eval_expr(char *str)
{
	int result;

	result = ft_basic(str, 0, 0, 0);
	return (result);
}
