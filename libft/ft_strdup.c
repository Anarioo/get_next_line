/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 23:22:23 by aalikhan          #+#    #+#             */
/*   Updated: 2019/10/02 23:45:29 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strdup(const char *s1)
{
	size_t	mem_space;
	char	*s2;
	char	*res;

	mem_space = ft_strlen(s1) + 1;
	s2 = (char *)malloc(mem_space);
	if (s2 == NULL)
		return (NULL);
	if (!(res = (char *)ft_memcpy(s2, s1, mem_space)))
	{
		free(s2);
		return (NULL);
	}
	return (res);
}
