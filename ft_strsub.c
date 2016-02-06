/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:48:57 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/07 14:11:57 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*mem;
	unsigned int	i;

	i = 0;
	mem = (char *)malloc(sizeof(*s) * len + 1);
	if (mem)
	{
		while (s[start] != '\0' && len)
		{
			mem[i] = s[start];
			i++;
			start++;
			len--;
		}
		return (mem);
	}
	return (NULL);
}
