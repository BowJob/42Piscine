/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 20:48:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/27 22:00:03 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_last(t_list *begin_list)
{
	t_list	*holder;

	holder = begin_list;
	while (holder->next != NULL)
	{
		holder = holder->next;
	}
	return (holder);
}
