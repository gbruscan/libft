/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:28:38 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 14:52:52 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t		i;
	size_t		j;

	i = ft_strlen(dest);
	j = i;
	if (ft_strlen(src) < n)
		return (NULL);
	while (i < j + n)
	{
		dest[i] = src[i - j];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
