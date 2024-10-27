/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:36:47 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/26 17:43:05 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (src[i] != 0 && i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (ft_strlen(src));
}

// int main(){
// 	char d[3] = {""} ;
// 	char d1[3] = {""} ;
// 	char s[] = "abcdefghijklmnoqrstuvwxyz";
// 	int a = strlcpy(d,s,3);
// 	int b = ft_strlcpy(d1,s,3);
// 	printf("org :-%s-\nmine:-%s-",d, d1);
// }