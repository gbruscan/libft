/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:28:48 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/05 17:12:56 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*mem;

	mem = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	i = 0;
	if (mem)
	{
		while (s[i])
		{
			mem[i] = f(i, s[i]);
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
