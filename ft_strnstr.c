/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:16:14 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 14:42:57 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (needle == 0)
		return (haystack);
	while (haystack && i < len)
	{
		if (!needle[j])
			return (&haystack[i - j]);
		if (haystack[i] == needle[j])
			j++;
		else
			j = 0;
		i++;
	}
	return (0);
}

// int main(){
// 	char h[] = {"abcdefghijk"};
// 	char n[] = {"sbc"};
// 	char *r = strnstr(h,n,11);
// 	printf("%s",r);
// }