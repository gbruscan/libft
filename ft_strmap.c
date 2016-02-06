/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 11:17:07 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/05 16:58:44 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	unsigned int	i;
	char			*mem;

	mem = (char *)malloc(sizeof(*s) * ft_strlen(s) + 1);
	i = 0;
	if (mem)
	{
		while (s[i])
		{
			mem[i] = f(s[i]);
			i++;
		}
		mem[i] = '\0';
		return (mem);
	}
	return (NULL);
}
