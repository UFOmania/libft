/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:58:54 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 22:01:32 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = ft_strlen(dst);
	while (src[j] && j < size - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (i);
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