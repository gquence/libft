/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 16:04:05 by gquence           #+#    #+#             */
/*   Updated: 2019/02/12 21:04:34 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*node_buf;
<<<<<<< HEAD

=======
	
>>>>>>> 56c909f35b0e009a53f5fa06594385e7c99a7f8d
	if (!f || !lst)
		return (NULL);
	node = f(lst);
	node_buf = node;
	while (lst->next)
	{
		lst = lst->next;
		if (!(node->next = f(lst)))
		{
			free(node->next);
<<<<<<< HEAD
			return (NULL);
=======
			return(NULL);
>>>>>>> 56c909f35b0e009a53f5fa06594385e7c99a7f8d
		}
		node = node->next;
	}
	return (node_buf);
}
