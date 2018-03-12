/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 15:04:10 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/12 11:37:28 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1)
{
	char			*str;
	int unsigned	i;
	int unsigned	k;
	int unsigned	len;

	if (!s1)
		return (ft_strdup(""));
	i = 0;
	len = ft_strlen((char *)s1) - 1;
	if (s1[i] == '\0')
		return (ft_strdup(""));
	while (s1[i] == ' ' || s1[i] == '\t' || s1[i] == '\n')
		i++;
	while ((s1[len] == ' ' || s1[len] == '\t' || s1[len] == '\n') && len > i)
		len--;
	if (!(str = ft_strnew(len - i + 1)))
		return (NULL);
	k = 0;
	while (i <= len)
	{
		str[k++] = s1[i++];
	}
	if (len == 0)
		return (ft_strdup(""));
	return (str);
}
