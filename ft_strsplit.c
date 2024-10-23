/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:09:00 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/22 22:54:48 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static int allsplitpoints(char *str, char c)
{
	int	i;
	int num;

	i = 0;
	num = 0;
	while(str[i] == c)
		i++;
	while(str[i])
	{
		if(str[i] != c && str[i-1] == c)
			num++;
		i++;
	}
	return (num);
}

char **ft_split(char const *s, char c)
{
	int	i;
	char **store;
	int numofstring;
	int currentstringsize;

	i = 0;
	currentstringsize = 0;
	numofstring = allsplitpoints(s, c);
	store = (char **)malloc(numofstring * sizeof(char *));
	while(s[i])
	{
		if(s[i+1] != c && s[i-1] == c && s[i] != c)
		{
			//calculate sting size
			
			//allocate memory

			//done hhh
			
		}
	}
}

int main()
{
	printf("%d",allsplitpoints("-a-a-a-",'-'));
}