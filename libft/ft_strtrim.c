/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 15:11:38 by rsalam            #+#    #+#             */
/*   Updated: 2022/11/12 12:02:53 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

static int	ft_char_in_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!s1)
		return (0);
	if (!set)
		return ((char *)s1);
	start = 0;
	while (s1[start] && ft_char_in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_in_set(s1[end - 1], set))
		end--;
	s2 = (char *)malloc(sizeof(*s1) * (end - start + 1));
	if (!s2)
		return (NULL);
	i = 0;
	while (end > start)
	{
		s2[i++] = s1[start++];
	}	
	s2[i] = 0;
	return (s2);
}

// int main()
// {
// 	char a[] = "abcccccccc";
// 	char b[] = "ab";
// 	char *s = ft_strtrim(a,b);
// 	printf("%s\n",s);
// }