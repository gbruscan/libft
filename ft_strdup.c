/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 16:36:20 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/02 14:51:27 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(const char *str)
{
	int		i;
	char	*chn;

	i = 0;
	chn = (char *)malloc(sizeof(char) * ft_strlen(str) + 1);
	if (!chn)
		return (NULL);
	ft_strcpy(chn, str);
	return (chn);
}
