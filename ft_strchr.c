/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:35:22 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 14:37:30 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	if (*s == c)
		return (s);
	while (*s++)
	{
		if (*s == c)
			return (s);
	}
	return (0);
}

// int main()
// {
// 	char s[] = {"\0"};
// 	char t = 'f';

// 	char *res = ft_strchr(s,t);
// 	char *org =strchr(s,t);
// 	// if(res == 0) 
// 	printf("mine : %p\n org : %p",res,org );
// }