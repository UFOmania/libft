/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:58:54 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/27 17:42:46 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_i;
	size_t	dst_len;

	src_i = 0;
	if (size == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	if (dst_len >= size)
		return (size + ft_strlen(src));
	else
	{
		while (src[src_i] && src_i < size - dst_len - 1)
		{
			dst[dst_len + src_i] = src[src_i];
			src_i++;
		}
		dst[dst_len + src_i] = 0;
		return (dst_len + ft_strlen(src));
	}
}

// int main()
// {
// 	char d[20] = {"abc\0"};
// 	char d1[20] = {"abc\0"};
// 	char s[] = "defghi";
// 	strlcat(d,s,10);
// 	ft_strlcat(d1,s,10);
// 	printf("org :-%s-\nmine:-%s-",d, d1);
// }