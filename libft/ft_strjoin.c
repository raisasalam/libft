/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 16:13:40 by rsalam            #+#    #+#             */
/*   Updated: 2022/10/03 17:23:40 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<string.h>
#include "libft.h"

char	*ft_sjoin(char const *s1, char const *s2, char *s3)
{	
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		s3[j++] = s1[i++];
	}
	i = 0;
	while (s2[i] != '\0')
	{
		s3[j++] = s2[i++];
	}
	s3[j] = '\0';
	return (s3);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;

	if (!s1 || !s2)
		return (NULL);
	s3 = malloc(ft_strlen((char *)s1) + (ft_strlen((char *)s2) + 1) * 1);
	if (s3 == NULL)
		return (NULL);
	s3 = ft_sjoin(s1, s2, s3);
	return (s3);
}

/*#include<stdio.h>
int main()
{
	char *str[10] = {"abc", "xyz","peke","jofofj"};
	char *s3;
	s3 = ft_strjoin(4, str, "+");
	printf("%s",s3);
}*/