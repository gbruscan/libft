/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/05 15:23:52 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 15:25:07 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static char		*ft_strtrim_char(char *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	*str;

	i = 0;
	k = 0;
	j = ft_strlen(s) - 1;
	while (s[i] != '\0' && s[i] == c)
		i++;
	if (i == j)
		return (NULL);
	while (s[j] == c)
		j--;
	str = (char *)malloc(j - i + 1);
	if (!str)
		return (NULL);
	while (i <= j)
	{
		str[k] = s[i];
		k++;
		i++;
	}
	str[k] = '\0';
	return (str);
}

static char		**tab_finisher(char **tab, char *s, char *mem, int j)
{
	if (s && j == 0)
	{
		tab[j] = ft_strdup(s);
		j += 1;
		mem = NULL;
		free(mem);
	}
	else if (mem && ft_strlen(mem) >= 1)
	{
		tab[j] = mem;
		j += 1;
	}
	tab[j] = NULL;
	return (tab);
}

static char		**tab_starter(char **tab, char *s, char *mem, char c)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (s && s[i] != '\0')
	{
		if (s[i] == c)
		{
			tab[j] = ft_strdup(mem);
			j += 1;
			mem = NULL;
			free(mem);
			while (s[i] == c && s[i] != '\0')
				i++;
			mem = (char *)malloc(1);
		}
		mem = ft_strjoin_char(mem, s[i]);
		i++;
	}
	return (tab_finisher(tab, s, mem, j));
}

char			**ft_strsplit(char const *s, char c)
{
	char	**tab;
	char	*mem;

	if (!s)
		return (NULL);
	tab = (char **)malloc(1);
	mem = (char *)malloc(1);
	if (ft_strcmp(s, "") == 0)
	{
		tab[0] = NULL;
		return (tab);
	}
	s = ft_strtrim_char((char *)s, c);
	if (!tab || !mem)
		return (NULL);
	if (s == NULL)
		tab[0] = NULL;
	return (tab_starter(tab, (char *)s, mem, c));
}
