/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:36:47 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 14:39:30 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (i);
}

// int main(){
// 	char d[] = {".........."};
// 	char d1[] = {".........."};
// 	char s[] = "abcdefghijklmnoqrstuvwxyz"
// 	strlcpy(d,s,10);
// 	ft_strlcpy(d1,s,10);
// 	printf("org :-%s-\nmine:-%s-",d, d1);
// }