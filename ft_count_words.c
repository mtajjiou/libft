/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_words.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/02 13:33:09 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 11:14:00 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_count_words(char const *s, char c)
{
	unsigned int	i;
	int				wor;

	i = 0;
	wor = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			wor++;
		while (s[i] && (s[i] != c))
			i++;
	}
	return (wor);
}
