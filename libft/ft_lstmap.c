/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aalikhan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/03 04:14:45 by aalikhan          #+#    #+#             */
/*   Updated: 2019/10/03 04:14:48 by aalikhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*node;

	if (lst == NULL || f == NULL)
		return (NULL);
	if (!(node = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	node = f(lst);
	node->next = (lst->next) ? ft_lstmap(lst->next, f) : NULL;
	return (node);
}
