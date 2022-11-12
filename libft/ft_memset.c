/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 11:42:10 by rsalam            #+#    #+#             */
/*   Updated: 2022/10/19 15:24:00 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		((unsigned char *)b)[i] = c;
		i++;
	}
	return (b);
}

// #include<stdio.h>
// int main()
// {
// 	char str[100] = "nbcsdbfj dsjf db";

// 	ft_memset(str, ' ', 8 * sizeof(char));
// 	printf("After memset(): %s\n", str);
// 	return 0;
// }