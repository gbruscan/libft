/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 15:28:30 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 10:47:29 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list			*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*elem;

	elem = (t_list *)malloc(sizeof(t_list));
	if (!elem)
		return (NULL);
	if (content == NULL)
	{
		elem->content = NULL;
		elem->content_size = 0;
		elem->next = NULL;
	}
	else
	{
		elem->content = (void *)content;
		elem->content_size = content_size;
		elem->next = NULL;
	}
	return (elem);
}
