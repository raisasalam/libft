/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 17:28:05 by rsalam            #+#    #+#             */
/*   Updated: 2022/11/12 17:19:20 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_dst;
	size_t	len_src;
	size_t	b;

	if (dstsize == 0)
		return (ft_strlen(src));
	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	i = 0;
	b = len_dst;
	while (i < len_src && b + 1 < dstsize)
	{
		dst[b] = src[i];
		i++;
		b++;
	}
	if (dstsize != 0 && b < dstsize)
		dst[b] = '\0';
	if (dstsize > len_dst)
		return (len_dst + len_src);
	else
		return (dstsize + ft_strlen(src));
}

// #include<stdio.h>
// int main()
// {
// 	char d[] = "raisa";
// 	char s[] = "salam";
// 	printf("%zu\n", ft_strlcat(d, s, 0));
// 	printf("%zu", strlcat(d, s, 0));
// }