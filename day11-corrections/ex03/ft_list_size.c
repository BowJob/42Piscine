/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 20:48:26 by cshi              #+#    #+#             */
/*   Updated: 2016/07/27 22:23:50 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	int		count;
	t_list	*holder;

	count = 1;
	holder = begin_list;
	if (!holder)
		return (0);
	while (holder->next != NULL)
	{
		count++;
		holder = holder->next;
	}
	return (count);
}
