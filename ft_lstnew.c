/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 16:38:48 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 17:03:13 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list *ft_lstnew(void *content)
{
	t_list *node;

	node = ft_calloc(1,sizeof(t_list));
	if(node == 0)
		return (0);
	node->context = content;
	return (node);
}

// int main()
// {
// 	t_list *list = ft_lstnew("ab");
// 	ft_putstr_fd(list->context , 1);
// }