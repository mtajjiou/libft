/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 19:43:50 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 12:29:38 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	char	*sub;
	char	*hsub;
	int		plus;

	if (!*s2)
		return ((char *)s1);
	while (*s1 && n > 0)
	{
		sub = (char *)s2;
		hsub = (char *)s1;
		plus = 0;
		while (*sub == *hsub && n - plus > 0)
		{
			plus++;
			sub++;
			hsub++;
			if (*sub == '\0')
				return ((char *)s1);
		}
		s1++;
		n--;
	}
	return (NULL);
}
