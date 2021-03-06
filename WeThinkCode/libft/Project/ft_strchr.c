/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 16:28:21 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/06 13:03:26 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int n)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != n)
			i++;
		else
			return ((char *)&s[i]);
	}
	if (s[i] == n)
		return ((char *)&s[i]);
	return (0);
}
