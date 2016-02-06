/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 12:04:39 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/05 16:52:53 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strjoin(char const *s1, char const *s2)
{
	char		*mem;
	int			i;
	int			j;

	i = 0;
	j = 0;
	mem = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (mem)
	{
		while (s1[j])
			mem[i++] = s1[j++];
		j = 0;
		while (s2[j])
			mem[i++] = s2[j++];
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
