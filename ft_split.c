/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:09:00 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/28 17:01:34 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

static char	*gen_str(char *s, int size, int *store_index)
{
	char	*tmp;

	tmp = ft_calloc(size + 1, sizeof(char));
	if (tmp == 0)
		return (0);
	ft_strlcpy(tmp, s, size + 1);
	(*store_index)++;
	return (tmp);
}

static void	initializer_variables(int *str_i, int *sps, int *start)
{
	*str_i = 0;
	*sps = -1;
	*start = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**store;
	int		str_i;
	int		sps;
	int		num_of_strings;
	int		start;

	if (s == 0)
		return (NULL);
	initializer_variables(&str_i, &sps, &start);
	num_of_strings = get_strings_count((char *)s, c);
	store = ft_calloc(num_of_strings + 1, sizeof(char *));
	if (store == 0)
		return (0);
	while (s[str_i] != 0)
	{
		if (s[str_i] != c)
		{
			start = str_i;
			while (s[str_i] != c && s[str_i] != 0)
				str_i++;
			store[sps] = gen_str((char *)s + start, str_i - start, &sps);
		}
		else str_i++;
	}
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