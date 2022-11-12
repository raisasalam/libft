/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 10:59:59 by rsalam            #+#    #+#             */
/*   Updated: 2022/09/30 11:14:17 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	int		i;
	int		len;
	char	*dup;

	len = ft_strlen(s1) + 1;
	dup = malloc(len);
	if (!dup)
		return (0);
	i = 0;
	while (s1[i] != '\0' )
	{
		dup[i] = s1[i];
		i ++;
	}	
		dup[i] = '\0';
	return (dup);
}
