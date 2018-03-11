/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:42:40 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 11:55:21 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *destination, const char *source)
{
	size_t i;

	i = 0;
	if(!source && !destination)
		return (NULL);
	while (source[i])
	{
		destination[i] = source[i];
		i++;
	}
	destination[i] = '\0';
	return (destination);
}
