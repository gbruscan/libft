/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 18:37:40 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 14:21:21 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len;
	size_t	n;

	len = 0;
	while (len < size && *dst && *(dst++))
		len++;
	n = size - len;
	if (n < 1)
		return (len + ft_strlen((char *)src));
	while (*src)
	{
		if (n > 1)
		{
			*(dst++) = *src;
			n--;
		}
		src++;
		len++;
	}
	*dst = '\0';
	return (len);
}
