/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:58:54 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 15:56:26 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dst[i])
		i++;
	while (src[i] && i < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (j);
}

// int main()
// {
// 	char d[10] = {"abc\0"};
// 	char d1[10] = {"abc\0"};
// 	char s[] = "defghijklmnoqrstuvwxyz";

// 	strlcat(d,s,10);
// 	ft_strlcat(d1,s,10);
// 	printf("org :-%s-\nmine:-%s-",d, d1);
// }