/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checklast.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 14:27:27 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/03 19:09:13 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_checklast(char *s)
{
	size_t end;

	end = ft_strlen(s);
	while ((s[end] == ' ' || s[end] == '\n' || s[end] == '\t'
		|| s[end] == '\0') && end > 0)
		end--;
	return (end);
}
