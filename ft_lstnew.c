/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 11:45:47 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/29 12:04:49 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *my;

	my = (t_list*)malloc(sizeof(t_list));
	if (!my)
		return (NULL);
	if (content)
	{
		if (!(my->content = (void *)ft_memalloc(content_size)))
			return (NULL);
		ft_memcpy(my->content, content, content_size);
		my->content_size = content_size;
	}
	else
	{
		my->content = NULL;
		my->content_size = 0;
	}
	my->next = NULL;
	return (my);
}
