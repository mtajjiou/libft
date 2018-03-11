/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:41:37 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/02 13:42:17 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *v, int i, int len)
{
	unsigned char *c;

	c = (unsigned char*)v;
	while (len)
	{
		*c = i;
		c++;
		len--;
	}
	return (v);
}
