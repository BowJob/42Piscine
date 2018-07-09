/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:38:33 by cshi              #+#    #+#             */
/*   Updated: 2016/07/18 22:25:50 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
/* Put test prototypes here */
void	ft_putstr(char *str);

/* Put included prototypes here */
int ft_putchar(char c);


int main()
{
	char a[] = "hello";
	char b[] = "l33t h4x0r";
	ft_putstr(a);
	ft_putstr(b);
	return (0);
}

int ft_putchar(char c)
{
	    write (1, &c, 1) ;
		    return (0);
}
