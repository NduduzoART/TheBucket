/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 13:29:08 by ngumede           #+#    #+#             */
/*   Updated: 2018/07/06 12:49:24 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char const *src)
{
	char	*des;

	des = (char *)malloc(ft_strlen(src) + 1);
	if (des != '\0')
	{
		ft_strcpy(des, src);
	}
	return (des);
}
