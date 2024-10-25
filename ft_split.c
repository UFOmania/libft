/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:09:00 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/23 14:53:11 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int	get_strings_count(char *str, char c)
{
	int	i;
	int	num;

	i = 0;
	num = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			num++;
			while (str[i] != c && str[i] != 0)
				i++;
		}
		else
			i++;
	}
	return (num);
}

static char	*generate_string(char *s, int size, int *store_index)
{
	char	*tmp;

	tmp = ft_calloc(size + 1, sizeof(char));
	if (tmp == 0)
		return (0);
	ft_strlcpy(tmp, s, size + 1);
	(*store_index)++;
	return (tmp);
}

char	**ft_split(char const *s, char c)
{
	char	**store;
	int		string_i;
	int		store_i;
	int		num_of_strings;
	int		start;

	string_i = 0;
	store_i = -1;
	start = 0;
	num_of_strings = get_strings_count(s, c);
	store = ft_calloc(num_of_strings + 1, sizeof(char *));
	if (store == 0)
		return (0);
	while (s[string_i] != 0)
		if (s[string_i] != c)
		{
			start = string_i;
			while (s[string_i] != c && s[string_i] != 0)
				string_i++;
			store[store_i] = generate_string(s + start, string_i - start, &store_i);
		}
		else
			string_i++;
	return (store);
}

// int main()
// {
// 	char **res = ft_split("--hello--hh-how can -I help-you------",'-');
// 	int i = 0;
// 	while( res[i] != 0)
// 	{
// 		printf("the 0 reasult : ~%s~\n", res[i]);
// 		i++;
// 	}
// 	//printf("the reasult : ~%s~\n", res[0]);
// 	i = 0;
// 	while(i<0){
// 		free(res[i]);
// 		i++;
// 	}
// 	free(res);
// 	// printf("%d",allsplitpoints("d-hello-f-d" , '-'));
// }