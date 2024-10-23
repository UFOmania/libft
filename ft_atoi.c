/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:37:13 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 14:24:08 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	resault;

	i = 0;
	sign = 1;
	resault = 0;
	if (!str[i])
		return (0);
	while (str[i] == ' ')
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resault *= 10;
		resault += str[i] - '0';
		i++;
	}
	return (resault * sign);
}

// int main()
// {
// 	char s[] = "     123";
// 	printf("mine:-%d-\norg :-%d-", ft_atoi(s),atoi(s));
// }