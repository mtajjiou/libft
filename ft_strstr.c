/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:45:04 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 12:29:51 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t	len;

	if (*s2 == '\0')
		return ((char *)s1);
	len = ft_strlen((char*)s2);
	while (*s1)
	{
		if (!ft_strncmp(s1, s2, len))
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
