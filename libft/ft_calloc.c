/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsalam <rsalam.student@42abudhabi.ae>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:53:29 by rsalam            #+#    #+#             */
/*   Updated: 2022/11/12 16:16:52 by rsalam           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (size != 0 && count > SIZE_T_MAX / size)
		return (NULL);
	ptr = malloc (count * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	ft_bzero (ptr, count * size);
	return (ptr);
}
