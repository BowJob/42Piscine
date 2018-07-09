/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 20:48:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/27 23:16:26 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*holder;
	t_list	*elem;
	t_list	*first;

	if (ac <= 1)
		return (NULL);
	i = ac - 1;
	elem = ft_create_elem(av[i]);
	i--;
	elem->next = NULL;
	first = elem;
	while (i >= 1)
	{
		holder = elem;
		elem = ft_create_elem(av[i]);
		elem->next = holder;
		i--;
	}
	return (first);
}
