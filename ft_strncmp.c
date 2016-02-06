/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:28:24 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 14:42:24 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	if (str1[i] == 0 || str2[i] == 0)
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
	while (str1[i] && str2[i] && str1[i] == str2[i] && i < n)
		i++;
	if (i == n)
		return ((unsigned char)str1[i - 1] - (unsigned char)str2[i - 1]);
	else
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
