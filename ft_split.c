/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:09:00 by massrayb          #+#    #+#             */
/*   Updated: 2024/11/03 22:06:39 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

static size_t	count_strings(char *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != '\0')
	{
		if (*s != c)
		{
			while (*s != c && *s)
				s++;
			i++;
		}
		else
			s++;
	}
	return (i);
}

static char	*custom_strdub(char *s, size_t len)
{
	char	*res;

	res = (char *)malloc((len + 1) * sizeof(char));
	if (res == 0)
		return (NULL);
	ft_strlcpy(res, s, len + 1);
	return (res);
}

static void	free_store(size_t size, char **store)
{
	while (size - 1 >= 0)
	{
		free(store[size]);
		store[size] = NULL;
		size--;
	}
	free(store);
	store = NULL;
}

static void	do_split(char **store, char *s, char c)
{
	size_t	start;
	int		i;
	int		j;

	start = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		start = i;
		if (s[i] != c)
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			store[j] = custom_strdub(s + start, i - start);
			if (store[j] == NULL)
			{
				free_store(j, store);
				return ;
			}
			j++;
		}
		else
			i++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**store;
	size_t	size;

	size = count_strings((char *)s, c);
	store = (char **)malloc((size + 1) * sizeof(char *));
	if (store == NULL)
		return (NULL);
	do_split(store, (char *)s, c);
	if (store != NULL)
		store[size] = NULL;
	return (store);
}

// int main()
// {
// 	char **s = ft_split("hello!",' ');
// 	int i = 0;
// 	while(s[i])
// 	{
// 		printf("%s\n",s[i]);
// 		i++;
// 	}
// }