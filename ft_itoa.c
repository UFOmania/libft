/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 18:16:51 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 22:18:56 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_buffer_size(int number)
{
	int	index;

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

static char	*converting(int nbr, char *dst, int size)
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
	if (nbr <= 9 && nbr >= 0)
	{
		dst[size] = nbr + '0';
	}
	return (dst);
}

char	*ft_itoa(int n)
{
	char	*resault;
	int		buff_size;

	buff_size = get_buffer_size(n);
	resault = (char *)malloc((sizeof(char) * buff_size) + 1);
	if (resault == 0)
		return (0);
	resault = converting(n, resault, buff_size - 1);
	resault[buff_size] = '\0';
	return (resault);
}

int main(){
	char *s = ft_itoa(-123456);
	int i = 0;
	// while(i < 10)
	// {
	// 	printf("%p\n",s[i]);
	// 	i++;
	// }
	printf("resault = %s\n",s);
	free(s);
}