/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:41:44 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/07 14:27:50 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char		*ft_strnew(size_t size)
{
	char		*mem;

	mem = (char *)malloc(sizeof(char) * size + 1);
	if (mem)
	{
		while (size)
		{
			mem[size - 1] = '\0';
			size--;
		}
		return (mem);
	}
	return (NULL);
}
