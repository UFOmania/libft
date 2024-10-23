/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 12:51:36 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 10:28:02 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*p;
	size_t	i;

	i = 0;
	p = (char *)malloc(ft_strlen(s) * sizeof(char) + 1);
	if (p == 0)
		return (malloc(0));
	while(s[i])
	{
		p[i] = s[i];
		i++;
	}
	p[i] = 0;
	return (p);
}

// int main()
// {
// 	char *s = "";
// 	int i = 0;
// 	while(s[i])
// 		i++;
// 	printf("%d", i * sizeof(char));
// }