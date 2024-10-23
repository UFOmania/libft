/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:31:14 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 14:33:27 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (d <= s)
	{
		while (i++ < len)
			d[i] = s[i];
	}
	else
	{
		d += len -1 ;
		s += len -1;
		while (i++ < len)
			*d-- = *s--;
	}
	return (dest);
}

// int main(){

// 	char s[] = {"0123456789"};
// 	char *res = ft_memmove(&s[0],&s[2],3);
// 	printf("%s",s);
// }