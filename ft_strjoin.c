/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: massrayb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:39:41 by massrayb          #+#    #+#             */
/*   Updated: 2024/10/26 16:54:39 by massrayb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	unsigned int	size;
	unsigned int	i;
	char			*resault;
	int				s1_len;
	int				s2_len;

	i = 0;
	if (s1 == 0 || s2 == 0)
		return (0);
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	size = s1_len + s2_len;
	resault = (char *)malloc((size + 1) * sizeof(char));
	if (resault == 0)
		return (0);
	ft_bzero(resault, size + 1);
	if (resault == 0)
		return (0);
	ft_strlcat(resault, s1, s1_len + 1);
	ft_strlcat(resault + s1_len, s2, s2_len + 1);
	return (resault);
}

// int main(){
// 	char s1[] = {"abc"};
// 	char s2[] = {"def"};
// 	char *r = ft_strjoin(s1,s2);
// 	ft_putstr_fd(r,1);
// 	free(r);
// }