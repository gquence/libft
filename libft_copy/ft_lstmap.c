/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 16:04:05 by gquence           #+#    #+#             */
/*   Updated: 2019/02/01 16:04:50 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*buf;

	if (!f || !lst)
		return (NULL);
	node = (t_list *)malloc(sizeof(t_list));
	buf = node;
	while (lst)
	{
		node = f(lst);
		if (lst->next)
		{
			node = node->next;
			lst = lst->next;
		}
		else
			node->next = NULL;
	}
	return (buf);
}
