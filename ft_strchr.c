/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:29:55 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 14:47:04 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != c && s[i] != 0)
		i++;
	if (s[i] == '\0' && (unsigned char)c != '\0')
		return (NULL);
	return ((char *)(s + i));
}
