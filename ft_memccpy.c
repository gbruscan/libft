/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:18:23 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 15:13:31 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*dst2;
	unsigned char		*src2;
	size_t				i;

	if (!dst || !src)
		return (NULL);
	dst2 = (unsigned char *)dst;
	src2 = (unsigned char *)src;
	i = 0;
	if (n == 0)
		return (NULL);
	while (i < n)
	{
		if (src2[i] == (unsigned char)c)
			return (dst + i + 1);
		dst2[i] = src2[i];
		i++;
	}
	return (NULL);
}
