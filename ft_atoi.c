/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/28 14:41:18 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/03 11:38:51 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		i;
	int		number;
	int		neg;

	i = 0;
	number = 0;
	neg = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (!(ft_isdigit(str[i + 1])))
			return (0);
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_isdigit(str[i]))
	{
		number = number * 10 + str[i] - '0';
		i++;
	}
	return (number * neg);
}
