/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 18:21:02 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/05 16:52:03 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

void		*ft_memalloc(size_t size)
{
	void	*mem;

	if (size == 0)
		return (NULL);
	mem = malloc(size);
	if (mem)
	{
		ft_bzero(mem, size);
		return (mem);
	}
	return (NULL);
}
