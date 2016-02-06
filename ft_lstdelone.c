/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:02:52 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 10:48:36 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

void	ft_lstdelone(t_list **alst, void (*del)(void*, size_t))
{
	if (alst)
	{
		if (*alst)
		{
			del((*alst)->content, (*alst)->content_size);
			free(*alst);
			(*alst) = NULL;
		}
	}
}
