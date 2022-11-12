/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 17:16:57 by rsalam            #+#    #+#             */
/*   Updated: 2022/10/07 13:14:56 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include<stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	const char	*b;

	a = dst;
	b = src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}

/*int main ()
{
	char dst[50] = "good morning";
	char src[50] = "memmory copy";

	ft_memcpy(dst, src, sizeof(src));
	printf("%s", dst);

}*/