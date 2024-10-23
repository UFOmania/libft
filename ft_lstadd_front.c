/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:05:17 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 18:45:37 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstadd_front(t_list **old, t_list *new)
{
	new->next = *old;
}

int main()
{
	t_list *head  = ft_lstnew("ab");
	t_list *new_head = ft_lstnew('bc');
	ft_lstadd_front(&head,new_head);
	void *content;

}