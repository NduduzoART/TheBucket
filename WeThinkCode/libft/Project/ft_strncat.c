/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 06:54:44 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/06 13:14:02 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t count;
	size_t index;

	count = 0;
	index = 0;
	while (dst[count] != '\0')
	{
		count++;
	}
	while (src[index] != '\0' && index < n)
	{
		dst[count + index] = src[index];
		index++;
	}
	dst[count + index] = '\0';
	return (dst);
}
