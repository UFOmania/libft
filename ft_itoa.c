/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:16:51 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 22:05:06 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	getindex(int number)
{
	int index;

	if (number < 0)
	{
		index = 1;
		number *= -1;
	}
	while (number > 0)
	{
		number /= 10;
		index++;
	}
	return (index);
}

static char *converting(int nbr, char *dst, int size)
{
	if (nbr < 0)
	{
		nbr *= -1;
		dst[0] = '-';
	}
	while (nbr > 9)
	{
		dst[size] = (nbr % 10) + '0';
		nbr /= 10;
		size--;
	}
	if (nbr <=9 && nbr >= 0)
	{
		dst[size] = nbr + '0';
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*resault;
	int		index;

	index = getindex(n);
	resault = (char *)malloc((sizeof(char) * index ) + 1);
	if (resault == 0)
		return 0;
	resault = converting(n, resault, index - 1);
	resault[index] = '\0';
	return (resault);
}

// int main(){
// 	char *s = ft_itoa(-123);
// 	int i = 0;
// 	// while(i < 10)
// 	// {
// 	// 	printf("%p\n",s[i]);
// 	// 	i++;
// 	// }
// 	printf("resault = %s\n",s);
// 	free(s);
// }