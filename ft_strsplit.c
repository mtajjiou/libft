/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/03 18:58:29 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 11:10:24 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**result;

	i = 0;
	j = 0;
	k = 0;
	if (!s || !c)
		return (0);
	result = (char **)malloc(sizeof(*result) * (ft_count_words(s, c)) + 1);
	if (!(result))
		return (NULL);
	while (s[i])
	{
		while (s[i] == c)
			i++;
		j = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > j)
			result[k++] = ft_strndup(s + j, i - j);
	}
	result[k] = NULL;
	return (result);
}
