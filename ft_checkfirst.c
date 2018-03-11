/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checkfirst.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:28:00 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 10:59:19 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_checkfirst(char *s)
{
	size_t beg;

	beg = 0;
	while ((s[beg] == ' ' || s[beg] == '\n' || s[beg] == '\t') && s[beg])
		beg++;
	return (beg);
}
