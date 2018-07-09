#include <stdio.h>

int	*ft_range(int min, int max);

int	*ft_intcpy(int *dest, int *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		printf("src is %d\n", src[i]);
		dest[i] = src[i];
		printf("dest is %d\n", dest[i]);
		i++;
	}
	dest[i] = '\0';
	return (dest);
}


int main()
{
	int min;
	int max;
	int *display[100];
	int i;

	printf("Enter Min number\n");
	scanf("%d", &min);
	printf("Enter Max number\n");
	scanf("%d", &max);
	printf("\n");
	ft_intcpy(display, ft_range(min, max));
	i = 0;
	while (display[i] != '\0')
	{
		printf("i is %d\n", i);
		printf("%d\n", display[i]);
		i++;
	}
	return 0;
}
