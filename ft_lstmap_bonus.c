/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 04:29:41 by massrayb          #+#    #+#             */
/*   Updated: 2024/11/11 05:38:16 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	append_back(t_list **lst, t_list *new)
{
	(*lst)->next = new;
	(*lst) = new;
}

static t_list	*a(t_list *h, t_list *l, void *(*f)(void *), void (*d)(void *))
{
	void	*ctx;
	t_list	*tmp;
	t_list	*ptr;

	ptr = h;
	while (l)
	{
		ctx = f(l->content);
		tmp = ft_lstnew(ctx);
		if (tmp == NULL)
		{
			d(ctx);
			return (NULL);
		}
		append_back(&ptr, tmp);
		l = l->next;
	}
	return (h);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	void	*ctx;
	t_list	*ptr;

	if (lst == NULL || f == NULL || del == NULL)
		return (NULL);
	ctx = f(lst->content);
	head = ft_lstnew(ctx);
	if (head == NULL)
	{
		del(ctx);
		return (NULL);
	}
	lst = lst->next;
	ptr = a(head, lst, f, del);
	if (ptr == NULL)
	{
		ft_lstclear(&head, del);
		return (NULL);
	}
	return (ptr);
}
