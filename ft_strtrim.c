/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/03 12:15:44 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 18:26:31 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char		*ft_strtrim(char const *s)
{
	int		i;
	int		j;
	int		k;
	char	*mem;

	if (!s)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	k = 0;
	while (s[i] && (ft_isblank((int)s[i]) || s[i] == '\n'))
		i++;
	if (i == j)
		return (NULL);
	while (s[i] && (ft_isblank((int)s[j]) || s[j] == '\n'))
		j--;
	mem = (char *)malloc(j - i + 1);
	if (!mem)
		return (NULL);
	while (i <= j)
		mem[k++] = s[i++];
	mem[k] = '\0';
	return (mem);
}
