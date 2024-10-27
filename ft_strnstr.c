/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:16:14 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/26 23:04:15 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*ndl;

	i = 0;
	j = 0;
	hay = (char *)haystack;
	ndl = (char *)needle;
	if (len == 0 || ndl[0] == 0)
		return (hay);
	while (hay[i] && i < len)
	{
		while (hay[i] == ndl[j])
		{
			if (ndl[j + 1] == 0)
				return (&hay[i - j]);
			i++;
			j++;
		}
		i++;
		j = 0;
	}
	return (0);
}

// int main(){
// 	char h[] = {"abcdefghijk"};
// 	char n[] = {"sbc"};
// 	char *r = strnstr(h,n,11);
// 	printf("%s",r);
// }