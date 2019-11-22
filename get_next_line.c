/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/12 01:00:05 by aalikhan          #+#    #+#             */
/*   Updated: 2019/11/15 20:10:44 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	get_next_line(const int fd, char **line)
{
	static char	*a[8000];
	char		buf[BUFF_SIZE + 1];
	int			rl;
	int			len;

	if ((fd && fd < 3) || fd >= 8000 || !line)
		return (-1);
	if ((rl = BUFF_SIZE) && !a[fd])
		a[fd] = ft_strnew(0);
	while (!(a[1] = ft_strchr(a[fd], '\n'))
	&& (rl = read(fd, buf, BUFF_SIZE)) > 0)
	{
		buf[rl] = 0;
		*line = ft_strjoin(a[fd], buf);
		free(a[fd]);
		a[fd] = *line;
	}
	if (rl <= 0 && !(len = ft_strlen(a[fd])))
		return (rl < 0 ? -1 : 0);
	len = a[1] ? a[1] - a[fd] : len;
	*line = ft_strsub(a[fd], 0, len);
	ft_strcpy(buf, a[fd] + len + (a[1] > 0));
	ft_strdel(a + fd);
	a[fd] = ft_strlen(buf) ? ft_strsub(buf, 0, ft_strlen(buf)) : NULL;
	return (1);
}
