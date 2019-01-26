#include "ft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*node;
	void	*new_cont;

	if (!(new_cont = ft_memalloc(content_size + 1)))
		return (NULL);
	if (!content)
	{
		new_cont = NULL;
		content_size = 0;
	}
	else
		ft_memcpy(new_cont, content, content_size);
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node->content = new_cont;
	node->content_size = content_size;
	node->next = NULL;
	return (node);
}

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	t_list	*node;

	if (!alst || !del)
		return ;
	node = *alst;
	while (node)
	{
		del(node->content, node->content_size);
		free(node);
		node = node->next;
	}
	*alst = NULL;
}

void	ft_lstadd(t_list **alst, t_list *new)
{
	if (new)
	{
		if (!(*alst))
			*alst = new;
		new->next = *alst;
		*alst = new;
	}
}

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst);
		lst = lst->next;
	}

}

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
