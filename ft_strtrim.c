/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 15:04:10 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/06 17:08:45 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_strtrim(char const *s1)
{
    char			*str;
    int unsigned	i;
    int unsigned	k;
    int unsigned 	len;


    i = 0;
    len = 0;
    if (!s1)
        return (ft_strdup(""));
    if (s1[i] == '\0')
        return (ft_strdup(""));
    len = ft_strlen((char *)s1) - 1;
    while (s1[i] == ' ' || s1[i] == '\t' || s1[i]== '\n')
        i++;
    while ((s1[len] == ' ' || s1[len] == '\t' || s1[len]== '\n') && len > i)
        len--;
    if(!(str = malloc(len - i)))
        return (NULL);
    str[len - i + 1] = '\0';
    k = 0;
    while (i <= len)
    {
        str[k] = s1[i];
        i++;
        k++;
    }
    if(len == 0)
        return (ft_strdup(""));
    return (str);
}