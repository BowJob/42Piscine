/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:38:33 by cshi              #+#    #+#             */
/*   Updated: 2016/07/19 23:12:54 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

/* Put test prototypes here */
int	ft_atoi(char *str);

/* Put included prototypes here */
int ft_putchar(char c);


int main()
{
	int holder;

	char a[8] = "123test";
	char b[8] = "-12test";
	char c[8] = "-test13";
	char d[8] = "test-13";
	char e[11] = "\t\t123456\t";
	char f[11] = "\v123456\v";
	char g[11] = "\n123456\n";

	printf("Input: %s\n", a);
	holder = atoi(a);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(a);
	printf("ft_atoi: %d\n\n", holder);

	printf("Input: %s\n", b);
	holder = atoi(b);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(b);
	printf("ft_atoi: %d\n\n", holder);

	printf("Input: %s\n", c);
	holder = atoi(c);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(c);
	printf("ft_atoi: %d\n\n", holder);
	
	printf("Input: %s\n", d);
	holder = atoi(d);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(d);
	printf("ft_atoi: %d\n\n", holder);

	printf("Input: %s\n", e);
	holder = atoi(e);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(e);
	printf("ft_atoi: %d\n\n", holder);

	printf("Input: %s\n", f);
	holder = atoi(f);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(f);
	printf("ft_atoi: %d\n\n", holder);

	printf("Input: %s\n", g);
	holder = atoi(g);
	printf("atoi: %d\n", holder);
	holder = ft_atoi(g);
	printf("ft_atoi: %d\n\n", holder);

		return (0);
}

int ft_putchar(char c)
{
	    write (1, &c, 1) ;
		    return (0);
}
