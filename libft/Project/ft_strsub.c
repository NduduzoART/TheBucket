/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:45:14 by ngumede           #+#    #+#             */
/*   Updated: 2018/06/19 10:44:57 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char *sub;

	if (!s)
	{
		return (NULL);
	}
	if (!(sub = (char*)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (sub != '\0')
		ft_memcpy(sub, s + start, len);
	sub[len] = 0;
	return (sub);
}
