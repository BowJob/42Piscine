/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cshi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/27 19:44:36 by cshi              #+#    #+#             */
/*   Updated: 2016/07/27 19:46:08 by cshi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *elem;

	elem = NULL;
	if ((elem = malloc(sizeof(t_list)) == NULL))
		return (NULL);
	if (elem)
	{
		elem->data = data;
		elem->next = NULL;
	}
	return (elem);
}
