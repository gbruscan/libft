/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:10:01 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/05 17:07:46 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t		i;

	i = 0;
	if (n == 0)
		return (1);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
		i++;
	if (i == n || s1[i] == s2[i] || s2[i] == '\0')
		return (1);
	return (0);
}
