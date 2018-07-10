/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/07 08:06:13 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/01 12:38:47 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	b;
	int				i;

	i = 0;
	b = (unsigned char)c;
	str = (unsigned char *)s;
	while (n > 0)
	{
		if (str[i] == b)
			return (str + i);
		i++;
		n--;
	}
	return (NULL);
}
