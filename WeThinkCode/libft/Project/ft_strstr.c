/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 15:10:09 by ngumede           #+#    #+#             */
/*   Updated: 2018/06/09 16:24:10 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *str, const char *to_find)
{
	size_t	n;

	n = ft_strlen(to_find);
	if (*to_find == 0)
		return ((char *)str);
	if (*str == 0)
		return (0);
	while (*str != '\0')
	{
		if (!ft_memcmp(str, to_find, n))
		{
			return ((char*)str);
		}
		str++;
	}
	return (0);
}
