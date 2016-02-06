/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 12:00:58 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 15:14:41 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t		i;
	char		tmp[len];
	char		*tmp2;

	i = 0;
	tmp2 = (char *)dst;
	while (i < len)
		tmp[i++] = *((char *)src++);
	while (i--)
		tmp2[i] = tmp[i];
	return (dst);
}
