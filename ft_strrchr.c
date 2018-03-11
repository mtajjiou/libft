/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:43:53 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/01 15:30:08 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;

	i = ft_strlen((char *)str);
	while (0 != i && str[i] != (char)c)
		i--;
	if (str[i] == (char)c)
		return ((char *)&str[i]);
	return (NULL);
}
