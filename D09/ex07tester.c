#include <stdio.h>

unsigned int ft_collatz_conjecture(unsigned int base);

int main()
{
	int x = ft_collatz_conjecture(5);
	printf("%d\n", x);
}
