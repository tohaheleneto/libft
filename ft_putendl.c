/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminisa- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 14:45:03 by vminisa-          #+#    #+#             */
/*   Updated: 2018/11/25 02:26:31 by vminisa-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl(char const *s)
{
	if (s)
	{
		while (*s)
		{
			write(1, s, 1);
			s++;
		}
		write(1, "\n", 1);
	}
}
