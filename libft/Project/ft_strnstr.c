/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/13 09:47:27 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/06 13:06:09 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t i;
	size_t length;
	size_t i2;

	length = 0;
	while (to_find[length] != '\0')
		length++;
	if (length == 0)
		return ((char *)str);
	i = 0;
	while (str[i] != '\0' && i < len)
	{
		i2 = 0;
		while (to_find[i2] != '\0' && (to_find[i2] == str[i + i2]))
		{
			i2++;
		}
		if (to_find[i2] == '\0' && ((i + i2) <= len))
			return ((char *)str + i);
		i++;
	}
	return (NULL);
}
