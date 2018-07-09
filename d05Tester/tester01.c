/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/13 18:38:33 by cshi              #+#    #+#             */
/*   Updated: 2016/07/18 23:13:46 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <unistd.h>
/* Put test prototypes here */
void	ft_putnbr(int nb);

/* Put included prototypes here */
int ft_putchar(char c);


int main()
{
	int input;
	printf("Feed me int!!!\n");
	scanf("%d", &input);
	ft_putnbr(input);
	return (0);
}

int ft_putchar(char c)
{
	    write (1, &c, 1) ;
		    return (0);
}
