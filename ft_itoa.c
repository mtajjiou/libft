/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 20:47:11 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 13:16:37 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int i)
{
    char	*temp;
    int		sign;
    size_t	len;

    sign = (i < 0) ? -1 : 1;
    len = ft_getnumberlen(i);
    if (sign == -1)
        len += 1;
    if (!(temp = malloc(len + 1)))
        return (NULL);
    temp[len] = '\0';
    while (len--)
    {
        temp[len] = ft_abs(i) % 10 + '0';
        i = ft_abs(i / 10);
    }
    if (sign == -1)
        temp[0] = '-';

    return (temp);
}