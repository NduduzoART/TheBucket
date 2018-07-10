/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 12:07:26 by ngumede           #+#    #+#             */
/*   Updated: 2018/06/08 15:34:54 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*a;
	unsigned char	*b;

	i = 0;
	a = (unsigned char*)dst;
	b = (unsigned char*)src;
	if (b >= a)
		ft_memcpy(a, b, len);
	else
	{
		while (len > 0)
		{
			a[len - 1] = b[len - 1];
			--len;
		}
	}
	return (a);
}
