/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_getnumberlen.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 15:37:00 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/12 10:33:16 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_getnumberlen(long int number)
{
	size_t counter;

	counter = 0;
	if (number == 0)
		return (1);
	while (number)
	{
		number = number / 10;
		counter++;
	}
	return (counter);
}
