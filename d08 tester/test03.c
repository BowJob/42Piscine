#include "ft_abs.h"
#include <stdio.h>

int main (void)
{
	int i = 5;
	int j = -9;

	printf("i is %d\n", i);
	printf("j is %d\n", j);
	i = ABS(i);
	j = ABS(j);
	printf("i is now %d\n", i);
	printf("j is now %d\n", j);
	return (0);
}
