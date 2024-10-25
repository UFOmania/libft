/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 16:04:40 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/25 16:46:31 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isaset(char c, char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

static int	starting(char *s, char *set, size_t start)
{
	while (s[start])
	{
		if (isaset(s[start], set))
			start++;
		else
			break ;
	}
	return (start);
}

static int	ending(char *s, char *set, size_t end)
{
	while (s[end])
	{
		if (isaset(s[end], set))
			end-- ;
		else
			break ;
	}
	return (end + 1);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*resault;
	size_t	start;
	size_t	end;
	size_t	s;

	start = 0;
	start = starting((char *)s1, (char *)set, start);
	end = strlen((char *)s1) - 1;
	end = ending((char *)s1, (char *)set, end);
	s = (ft_strlen((char *)s1) - start) - (ft_strlen((char *)s1) - end);
	resault = (char *)malloc(s * sizeof(char) + 1);
	if (resault == 0)
		return (0);
	ft_strlcpy(resault, (char *)s1 + start, s + 1);
	return (resault);
}

// int main()
// {
// 	char *f = ft_strtrim("ab123ba","ba");
// 	printf("%s",f);
// 	free(f);
// }