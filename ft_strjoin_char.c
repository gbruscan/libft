/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_char.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 17:26:59 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/05 17:32:31 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strjoin_char(char *s1, char c)
{
	char	*mem;
	int		i;
	int		j;

	i = 0;
	j = 0;
	mem = (char *)malloc(ft_strlen(s1) + 2);
	if (mem)
	{
		while (s1[j])
		{
			mem[i] = s1[j];
			i++;
			j++;
		}
		mem[i] = c;
		mem[i + 1] = '\0';
		return (mem);
	}
	return (NULL);
}
