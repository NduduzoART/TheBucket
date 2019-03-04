/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 11:38:49 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/06 12:57:46 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	size_t	count;

	count = 0;
	while (src[count] != '\0' && count < n)
	{
		dst[count] = src[count];
		++count;
	}
	while (count < n)
	{
		dst[count] = '\0';
		++count;
	}
	return (dst);
}
