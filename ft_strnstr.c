/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:16:14 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/25 15:18:38 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*h;
	char	*n;

	i = 0;
	j = 0;
	h = (char*)haystack;
	n = (char*)needle;
	if (n == 0)
		return (h);
	while (h[i] && i < len)
	{
		if (!n[j])
			return (&n[i - j]);
		if (h[i] == n[j])
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