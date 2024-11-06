/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 11:37:13 by massrayb          #+#    #+#             */
/*   Updated: 2024/11/04 11:53:54 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	handle_white_spaces(const char *s, int i)
{
	while (s[i] == ' ' || s[i] == '\t' || s[i] == '\v' || s[i] == '\f'
		|| s[i] == '\r' || s[i] == '\n')
		i++;
	return (i);
}

static int	handle_sign(const char *s, int index, int *sign)
{
	if (s[index] == '+' || s[index] == '-')
	{
		if (s[index] == '-')
			*sign *= -1;
		index++;
	}
	return (index);
}

static int	handle_numbers(const char *s, int index, long long *res)
{
	while (s[index] >= '0' && s[index] <= '9')
	{
		*res *= 10;
		*res += (s[index] - '0');
		index++;
	}
	return (index);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			sign;
	long long	result;

	i = 0;
	sign = 1;
	result = 0;
	i = handle_white_spaces(str, i);
	i = handle_sign(str, i, &sign);
	i = handle_numbers(str, i, &result);
	result *= sign;
	if (result < INT_MIN)
		result = -1;
	else if (result > INT_MAX)
		result = 0;
	return (result);
}

// #include <stdio.h>
// int main()
// {
// 	printf("%d\n%d",ft_atoi("-0"),atoi("-0"));
// }