/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/22 14:08:28 by ngumede           #+#    #+#             */
/*   Updated: 2018/06/13 09:37:49 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int		sign;
	size_t	count;
	size_t	result;

	sign = 1;
	count = 0;
	result = 0;
	while ((str[count] >= 9 && str[count] <= 13) || str[count] == 32)
		count++;
	if (str[count] == 43 || str[count] == 45)
	{
		if (str[count] == '-')
			sign = -1;
		count++;
	}
	while (str[count] && ft_isdigit(str[count]))
	{
		result *= 10;
		result += (str[count] - 48);
		count++;
	}
	return (sign * result);
}
