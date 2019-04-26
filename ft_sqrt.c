/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmiklaz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:58:45 by cmiklaz           #+#    #+#             */
/*   Updated: 2018/11/25 18:40:23 by cmiklaz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 0;
	while (i * i != nb)
	{
		if (i * i > nb)
		{
			return (0);
		}
		i++;
	}
	return (i);
}
