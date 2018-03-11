/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:42:10 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 11:22:20 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t i;
	char *c1;
	char *c2;

	if (!n || s1 == s2)
		return ((void*)s1);
	i = 0;
	c1 = ((char*)s1);
	c2 = ((char*)s2);
	while (i < n)
	{
		c1[i] = c2[i];
		i++;
	}

	return (s1);
}
