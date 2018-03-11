/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mtajjiou <mtajjiou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 12:58:48 by mtajjiou          #+#    #+#             */
/*   Updated: 2018/03/04 17:08:53 by mtajjiou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	long long int result;
	int i;
	int sign;

	i = 0;
	result = 0;
	sign = 0;
	while ((str[i] == '\n') || (str[i] == '\t') || (str[i] == '\v') ||
		(str[i] == ' ') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = 1;
		i++;
	}
	while (str[i] && (str[i] >= '0') && (str[i] <= '9'))
	{
		result = result * 10;
		result += (long long int)str[i] - '0';
		i++;
	}
	if (sign)
		return (-result);
	return (result);

}