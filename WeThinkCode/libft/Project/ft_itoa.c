/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngumede <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:51:49 by ngumede           #+#    #+#             */
/*   Updated: 2018/06/09 17:48:16 by ngumede          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_digits(int n)
{
	size_t count;

	count = 1;
	while (n /= 10)
		count++;
	return (count);
}

char			*ft_itoa(int n)
{
	size_t			len;
	char			*str;
	unsigned int	nbr;

	len = count_digits(n);
	nbr = n;
	if (n < 0)
	{
		nbr = -n;
		len++;
	}
	if (!(str = ft_strnew(len)))
		return (NULL);
	str[--len] = nbr % 10 + 48;
	while (nbr /= 10)
		str[--len] = nbr % 10 + '0';
	if (n < 0)
		str[0] = '-';
	return (str);
}
