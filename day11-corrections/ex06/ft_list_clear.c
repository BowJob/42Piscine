/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 20:48:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/27 23:42:16 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	*ft_list_clear(t_list **begin_list)
{
	t_list	*elem;
	t_list	*holder;

	elem = *begin_list;
	while (elem->next != NULL)
	{
		holder = elem;
		elem = elem->next;
		free(holder);
	}
	elem->data = NULL;
	elem->next = NULL;
}
