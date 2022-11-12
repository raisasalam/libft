/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 14:13:34 by rsalam            #+#    #+#             */
/*   Updated: 2022/11/12 16:15:24 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	i;
	size_t	slen;

	if (!s)
		return (NULL);
	if ((unsigned int)ft_strlen(s) < start)
	{
		substr = malloc(sizeof(char));
		substr[0] = '\0';
		return (substr);
	}	
	slen = ft_strlen(s) - start;
	if (slen > len)
		slen = len;
	substr = (char *)malloc(sizeof(char) * (slen + 1));
	if (!substr)
		return (NULL);
	i = 0;
	while (i < slen)
	{
			substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return (substr);
}

// int main()
// {
// 	char str[20] = "This";
//  	char *result = ft_substr(str, 2, 3);
//  	printf(" %s\n", result);
// }
