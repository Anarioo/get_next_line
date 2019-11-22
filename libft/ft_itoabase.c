/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoabase.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/06 01:03:27 by aalikhan          #+#    #+#             */
/*   Updated: 2019/10/06 01:03:31 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoabase(long n, int base)
{
	char	*rep_str;
	char	*str;
	int		len;

	len = ft_numdigits(n, base);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	rep_str = "0123456789abcdef";
	str[len] = '\0';
	str[0] = (n < 0) ? '-' : ' ';
	while (n != 0)
	{
		str[--len] = rep_str[(n % base) * ((n < 0) ? -1 : 1)];
		n /= base;
	}
	return (str);
}
