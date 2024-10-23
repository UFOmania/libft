/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:43:10 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 14:45:23 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;

	res = 0;
	if (*s == c)
		res = s;
	while (*s++)
	{
		if (*s == c)
			res = s;
	}
	return (res);
}

// int main(){
// 	char s[] = {"abcdefe"};
// 	char t = 'e';

// 	char *res = ft_strrchr(s,t);
// 	char *org =strrchr(s,t);
// 	// if(res == 0) 
// 	printf("mine : %p\n org : %p",res,org );
// }