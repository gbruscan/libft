/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:27:32 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 17:20:17 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (s2[0] == '\0' || n == 0)
		return ((char *)s1);
	while (s1[i] != '\0' && i < n)
	{
		if (j > 1)
			i -= j - 1;
		j = 0;
		while (s2[j] == s1[i] && i < n)
		{
			if (s2[j + 1] == '\0')
				return ((char *)s1 + i - j);
			j++;
			i++;
		}
		i++;
	}
	return (NULL);
}
