/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:50:50 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 15:32:44 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>


char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	s_size;
	char			*resault;

	i = 0;
	s_size = ft_strlen(s);
	resault = ft_calloc(s_size + 1, sizeof(char));
	if (resault == 0)
		return (0);
	while (i < s_size)
	{
		resault[i] = f(i, s[i]);
		i++;	
	}
	return (resault);		
}

// char *ff(unsigned int i , char c)
// {
// 	return c - 1;
// }

// int main()
// {
// 	char *s;
// 	s = ft_strmapi("abd", ff);
// 	printf("%p\n",s);
// 	printf("%p",s[3]);
// 	free(s);
// }