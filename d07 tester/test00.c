#include <stdio.h>

char    *ft_strcpy(char *dest, char *src);

int main()
{
	char s1[100];
	char s2[100];
	printf("Type, human:\n");
	scanf("%s", s2);   //User Input the string here
	ft_strcpy(s1,s2);
	printf("The Copied String is :%s\n", s1);
	return 0;
}
