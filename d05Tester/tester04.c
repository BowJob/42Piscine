/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:38:33 by cshi              #+#    #+#             */
/*   Updated: 2016/07/19 21:58:05 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

/* Put test prototypes here */
char *ft_strncpy(char *dest, char *src, unsigned int n);

/* Put included prototypes here */
int ft_putchar(char c);


int main()
{

	char a[7] = "Source";
	char b[5] = "Take";
	char *c;

	char d[6]= "Happy";
	char e[7] = "Normal";
	char *f;

	//When Source is longer than the Destination
	printf("%s\n", a);
	printf("%s\n", b);
	c = ft_strncpy(b, a, 3);
	printf("Take should take first 3: %s\n\n", c);
	c = ft_strncpy(b, a, sizeof(b));
	printf("Take should warp: %s\n\n", c);
	c = ft_strncpy(b, a, 10);
	printf("Take should be over taken: %s\n\n", c);

	//When Destination is longer than Source
	printf("%s\n", d);
	printf("%s\n", e);
	f = ft_strncpy(e, d, sizeof(e));
	printf("Normal became: %s\n\n", f);

	return (0);
}

int ft_putchar(char c)
{
	    write (1, &c, 1) ;
		    return (0);
}
