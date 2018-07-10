/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/24 16:47:12 by ngumede           #+#    #+#             */
/*   Updated: 2018/06/05 09:16:07 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t len)
{
	size_t		my_len;
	char		*my_dst;
	const char	*my_src;

	my_len = 0;
	my_dst = dst;
	my_src = src;
	while (my_len < len)
	{
		my_dst[my_len] = my_src[my_len];
		my_len++;
	}
	return (dst);
}
