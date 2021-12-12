/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:29 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 21:23:00 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_size_t.h>

size_t	ft_max_int(size_t *str)
{
	size_t	max;
	int		aux;

	aux = 0;
	max = str[aux];
	while (str[aux])
	{
		if (max <= str[aux])
			max = str[aux];
		aux++;
	}
	return (max);
}
