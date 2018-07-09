/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:38:33 by cshi              #+#    #+#             */
/*   Updated: 2016/07/19 21:33:30 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <libc.h>

/* Put test prototypes here */
char *ft_strcpy(char *dest, char *src);

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
	c = ft_strcpy(b, a);
	printf("Take became: %s\n\n", c);

	//When Destination is longer than Source
	printf("%s\n", d);
	printf("%s\n", e);
	f = ft_strcpy(e, d);
	printf("Normal became: %s\n\n", f);

	return (0);
}

int ft_putchar(char c)
{
	    write (1, &c, 1) ;
		    return (0);
}
