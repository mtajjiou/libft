/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 18:57:48 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 11:08:26 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char *new_str;
	char *iter;

	if (!(new_str = ft_strnew(sizeof(char) * (ft_strlen((char*)s1)))))
		return (NULL);
	iter = new_str;
	while (*s1)
	{
		*iter = *s1;
		s1++;
		iter++;
	}
	*iter = '\0';
	return (new_str);
}
