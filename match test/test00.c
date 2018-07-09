/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 01:45:28 by cshi              #+#    #+#             */
/*   Updated: 2016/07/24 08:53:44 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	match(char *s1, char*s2);

int main(void)
{
	int i = 0;
	char str1[50], str2[50];

	printf("Enter the string to be inspected: \n");
	scanf("%s", str1);
	while (str1[i])
	{
		if (str1[i] == '*')
		{
			printf("Why would you feed me '*' ? :(\n");
			return (0);
		}
		i++;
	}

	printf("Enter the string to be inspected by: \n");
	scanf("%s", str2);
	
	if (match(str1, str2) == 1)
		printf("Looks like we got a pair.\n");
	else if (match(str1, str2) == 0)
		printf("Didn't match. I always thought there was something funny about those two.\n");
	else
		printf("This is weird. You know you are not supposed to be here.\n");
	return (0);
}
