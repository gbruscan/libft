/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbruscan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/07 16:34:21 by gbruscan          #+#    #+#             */
/*   Updated: 2015/12/08 15:25:36 by gbruscan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

static void		ft_add_elem(t_list **nlst, t_list *elem)
{
	t_list		*tmp;

	tmp = *nlst;
	if (nlst)
	{
		if (tmp == NULL)
		{
			*nlst = elem;
			return ;
		}
		while (tmp->next)
			tmp = tmp->next;
		elem->next = NULL;
		tmp->next = elem;
	}
}

t_list			*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*elem;
	t_list		*nlst;

	nlst = NULL;
	while (lst)
	{
		elem = f(lst);
		ft_add_elem(&nlst, elem);
		lst = lst->next;
	}
	return (nlst);
}
