/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:45:54 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 11:53:57 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dst2;
	char		*src2;
	size_t		i;

	dst2 = (char *)dst;
	src2 = (char *)src;
	i = 0;
	while (i < n)
	{
		dst2[i] = src2[i];
		i++;
	}
	return (dst);
}
