/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/02 11:38:29 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 14:22:03 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void		ft_bzero(void *s, size_t n)
{
	size_t		i;
	char		*str;

	i = 0;
	str = (char *)s;
	if (n == 0)
		return ;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}
