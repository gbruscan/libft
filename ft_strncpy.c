/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:27:51 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 15:14:48 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t		i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	while (dst[i] && src[i] && i < n)
	{
		dst[i] = src[i];
		i++;
	}
	while (dst[i] && i < n)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
