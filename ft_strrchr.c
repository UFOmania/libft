/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:43:10 by massrayb          #+#    #+#             */
/*   Updated: 2024/11/03 14:17:34 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*res;
	size_t	i;

	i = 0;
	res = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			res = (char *)&s[i];
		i++;
	}
	if ((char)c == s[i])
		res = (char *)&s[i];
	return (res);
}
// #include <stdio.h>
// int main()
// {
// 	char s[] = {""};
// 	char t = 'e';
// 	char *res = ft_strrchr("  ",0);
// 	char *org =strrchr("  ",0);
// 	// if(res == 0) 
// 	printf("mine : %s\n org : %s",res,org );
// }