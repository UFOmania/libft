/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:50:35 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/26 18:13:06 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	i = 0;
	if (start >= (unsigned int)ft_strlen(s))
	{
		sub = (char *)malloc(sizeof(char));
		if (sub == 0)
			return (0);
		sub[0] = 0;
		return (sub);
	}
	sub = (char *)malloc((len * sizeof(char)) + 1);
	if (sub == 0)
		return (0);
	ft_strlcpy(sub, &s[start], len + 1);
	return (sub);
}

// int main(){
// 	char org[] = {"1234567"};
// 	char *sub = ft_substr(org, 2, 4);
// 	printf("%s",sub);
// 	free(sub);
// }