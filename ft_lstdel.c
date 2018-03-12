/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/10 19:35:19 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/12 10:39:27 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *templist;
	t_list *nextlist;

	templist = *alst;
	while (templist)
	{
		nextlist = templist->next;
		del((templist)->content, (templist)->content_size);
		free(templist);
		templist = nextlist;
	}
	*alst = NULL;
}
