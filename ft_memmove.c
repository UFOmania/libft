/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:31:14 by massrayb          #+#    #+#             */
/*   Updated: 2024/11/11 21:31:59 by massrayb         ###   ########.fr       */
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
	if (s == 0 && d == 0)
		return (0);
	if (dest == src)
		return (dest);
	if (d <= s)
		ft_memcpy(d, s, len);
	else
	{
		d += len -1 ;
		s += len -1;
		while (i < len)
		{
			*d-- = *s--;
			i++;
		}
	}
	return (dest);
}
