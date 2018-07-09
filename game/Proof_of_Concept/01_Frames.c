/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testframe.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/25 22:23:50 by cshi              #+#    #+#             */
/*   Updated: 2016/07/28 00:44:30 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
int system(const char *command);

void animate(int i);

int main()
{
	int i;
	int j;

	i = 1;
	j = 0;
	while (i <= 25)
	{
		if (j == 104)
			break;
		if (i == 25)
			i = 1;
		animate(i);
		i++;
		j++;
	}
	return (0);
}

void animate(int i)
{
	system("sleep .1");
	system("clear");
	if (i == 1)
		printf("01\n\n\n\n\n\n\n\n          |O____________|\n");
	if (i == 2)
		printf("02\n\n\n\n\n\n\n\n          |_O___________|\n");
	if (i == 3)
		printf("03\n\n\n\n\n\n\n\n          |__O__________|\n");
	if (i == 4)
		printf("04\n\n\n\n\n\n\n\n          |___O_________|\n");
	if (i == 5)
		printf("05\n\n\n\n\n\n\n\n          |____O________|\n");
	if (i == 6)
		printf("06\n\n\n\n\n\n\n\n          |_____O_______|\n");
	if (i == 7)
		printf("07\n\n\n\n\n\n\n\n          |______O______|\n");
	if (i == 8)
		printf("08\n\n\n\n\n\n\n\n          |_______O_____|\n");
	if (i == 9)
		printf("09\n\n\n\n\n\n\n\n          |________O____|\n");
	if (i == 10)
		printf("10\n\n\n\n\n\n\n\n          |_________O___|\n");
	if (i == 11)
		printf("11\n\n\n\n\n\n\n\n          |__________O__|\n");
	if (i == 12)
		printf("12\n\n\n\n\n\n\n\n          |___________O_|\n");
	if (i == 13)
		printf("13\n\n\n\n\n\n\n\n          |____________O|\n");
	if (i == 14)
		printf("14\n\n\n\n\n\n\n\n          |___________O_|\n");
	if (i == 15)
		printf("15\n\n\n\n\n\n\n\n          |__________O__|\n");
	if (i == 16)
		printf("16\n\n\n\n\n\n\n\n          |_________O___|\n");
	if (i == 17)
		printf("17\n\n\n\n\n\n\n\n          |________O____|\n");
	if (i == 18)
		printf("18\n\n\n\n\n\n\n\n          |_______O_____|\n");
	if (i == 19)
		printf("19\n\n\n\n\n\n\n\n          |______O______|\n");
	if (i == 20)
		printf("20\n\n\n\n\n\n\n\n          |_____O_______|\n");
	if (i == 21)
		printf("21\n\n\n\n\n\n\n\n          |____O________|\n");
	if (i == 22)
		printf("22\n\n\n\n\n\n\n\n          |___O_________|\n");
	if (i == 23)
		printf("23\n\n\n\n\n\n\n\n          |__O__________|\n");
	if (i == 24)
		printf("24\n\n\n\n\n\n\n\n          |_O___________|\n");
}
