/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:59:52 by rsalam            #+#    #+#             */
/*   Updated: 2022/11/12 11:57:45 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include<stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	i ++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i --;
	}
	return (0);
}

//  int main () {
//     const char str[] = "string.character.com";
//     const char ch = '.';
//     char *result;

//    result = ft_strrchr(str, ch);
//     printf("%s\n", result);
//    return(0);
//}