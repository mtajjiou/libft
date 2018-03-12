/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/12 09:55:20 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/12 09:57:26 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *destination, const char *source, size_t n)
{
	char *str;

	if (!n)
		return (destination);
	str = destination;
	while (n && *source)
	{
		*destination++ = *source++;
		n--;
	}
	while (n)
	{
		*destination++ = '\0';
		n--;
	}
	return (str);
}
