/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gquence <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/01 16:04:05 by gquence           #+#    #+#             */
/*   Updated: 2019/02/05 23:50:20 by gquence          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;
	t_list	*buf_node;
	t_list	*buf;
	void	*cont;

	if (!lst || !f)
		return (NULL);
	if (!(buf = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	while (lst)
	{
		buf = f(lst);
		if (!(node = (t_list *)malloc(sizeof(t_list))))
			return (NULL);
		if (!(cont = (void *)malloc(buf->content_size + 1)))
			return (NULL);
		if (!buf->content)
			cont = NULL;
		else
			ft_memcpy(cont, buf->content, buf->content_size);
		node->content = cont;
		node->content_size = buf->content_size;
		free(cont);
		lst = lst->next;
		node = node->next;
	}
	node->next = NULL;
	return (buf_node);
}
