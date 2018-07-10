/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:55:23 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/06 12:54:48 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isblank(int c)
{
	return ((c == ' ' || c == '\t' || c == '\n'));
}

char			*ft_strtrim(char const *s)
{
	char			*res;
	unsigned int	i;
	size_t			len;

	if (!s)
		return (0);
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	len = ft_strlen(s) - 1;
	while (len > i && ft_isblank(s[len]))
		len--;
	if (len < i)
		return (res = ft_strdup(""));
	return (res = ft_strsub(s, i, len - (size_t)i + 1));
}
