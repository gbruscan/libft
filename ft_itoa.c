/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 13:15:12 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 15:26:31 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static int		power(int n, int p)
{
	int		k;

	k = n;
	if (p == 0)
		return (1);
	while (p > 1)
	{
		n = n * k;
		p--;
	}
	return (n);
}

static char		*do_mem(char *mem, int n, int i, int j)
{
	while (j >= 0)
	{
		mem = ft_strjoin_char(mem, ((n / power(10, j)) + '0'));
		n -= (mem[i] - '0') * power(10, j);
		j--;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}

char			*ft_itoa(int n)
{
	char	*mem;
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	mem = (char *)malloc(1);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
	{
		mem[i] = '-';
		n *= -1;
		i += 1;
	}
	k = n;
	while (k > 10)
	{
		k /= 10;
		j++;
	}
	mem = do_mem(mem, n, i, j);
	return (mem);
}
