/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 22:55:45 by aalikhan          #+#    #+#             */
/*   Updated: 2019/10/02 22:55:46 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *b1, const void *b2, size_t len)
{
	size_t			i;
	unsigned char	*a1;
	unsigned char	*a2;

	if (len == 0)
		return (0);
	i = 0;
	a1 = (unsigned char *)b1;
	a2 = (unsigned char *)b2;
	while (i + 1 < len && a1[i] == a2[i])
		i++;
	return (a1[i] - a2[i]);
}
