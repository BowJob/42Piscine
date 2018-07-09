/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cfredric <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/23 11:47:36 by cfredric          #+#    #+#             */
/*   Updated: 2016/07/23 19:46:49 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_duplicate(char *argv, char *nums)
{
	while (*argv)
	{
		if (*argv != '.')
		{
			if (nums[(*argv) - '0'] == 'X')
				return (1);
			else
				nums[(*argv) - '0'] = 'X';
		}
		argv++;
	}
	return (0);
}

int		check_rows(char *argv)
{
	int index;
	char digit;
	char nums[10];
	int idx = 0;
	while (idx < 10)
	{
		nums[idx] = '0' + idx;
		idx++;
	}
	index = 0;
	while (argv[index])
	{
		digit = argv[index];
		if (!((digit >= '1' && digit <= '9') || digit == '.') || index > 9)
		{
			return (1);
		}
		index++;
	}
	if (index < 9 || check_duplicate(argv, nums))
		return (1);
	return (0);
}

int		check_num_clues(char **argv)
{
	int i;
	int j;
	int count;
	char *str;

	i = 1;
	j = 0;
	count = 0;
	while (i < 10)
	{
		str = argv[i];
		while (*str)
		{
			while (*str == '.')
				str++;
			if (*str >= '1' && *str <= '9')
			{
				count++;
				str++;
			}
		}
		i++;
	}
	return (count);
}
