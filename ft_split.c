/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:09:00 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/30 13:27:04 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	skip_chars(char *s, char c, int *str_i)
{
	while (s[*str_i] != c && s[*str_i] != 0)
		(*str_i)++;
}

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
			skip_chars((char *)str, c, &i);
			num++;
		}
		else
			i++;
	}
	return (num);
}

static char	*gen_str(char *s, int size, int *store_index)
{
	char	*tmp;

	tmp = malloc(size + 1);
	if (tmp == 0)
		return (0);
	ft_strlcpy(tmp, s, size + 1);
	(*store_index)++;
	return (tmp);
}

static void	vars_init(int *str_i, int *sps, int *start)
{
	*str_i = 0;
	*sps = -1;
	*start = 0;
}

char	**ft_split(char const *s, char c)
{
	char	**store;
	int		str_i;
	int		j;
	int		num_of_strings;
	int		start;

	if (s == 0)
		return (NULL);
	vars_init(&str_i, &j, &start);
	num_of_strings = get_strings_count((char *)s, c);
	store = malloc(num_of_strings * sizeof(char *));
	if (store == 0)
		return (0);
	while (s[str_i] != 0)
	{
		if (s[str_i] != c)
		{
			start = str_i;
			skip_chars((char *)s, c, &str_i);
			store[j] = gen_str((char *)s + start, str_i - start, &j);
		}
		else
			str_i++;
	}
	return (store);
}

// int main()
// {
// 	char **res = ft_split("salut\0 1337\0 reda",'\0');
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