/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:41:27 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/02 14:12:24 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *destination, const void *source, size_t n)
{
	size_t	i;
	char	*c1;
	char	*c2;

	i = 0;
	c1 = (char*)source;
	c2 = (char*)destination;
	if (source > destination)
	{
		while (i < n)
		{
			c2[i] = c1[i];
			i++;
		}
	}
	else
	{
		while (n--)
		{
			c2[n] = c1[n];
		}
	}
	return (c2);
}
