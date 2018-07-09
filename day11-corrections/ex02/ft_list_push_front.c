/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 20:48:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/27 20:48:29 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*elem;

	elem = *begin_list;
	if (!*begin_list)
	{
		*beging_list = ft_create_elem(data);
	}
	else
	{
		elem = ft_create_elem(data);
		elem->next = *begin_list;
		*begin_list = elem;
	}
}
