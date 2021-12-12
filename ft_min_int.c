/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:09:27 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 18:51:45 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <sys/_types/_size_t.h>

size_t	ft_min_int(size_t *str)
{
	size_t	min;
	int	aux;

	aux = 0;
	min = str[aux];
	while (str[aux])
	{
		if (min >= str[aux])
			min = str[aux];
		aux++;
	}
	return (min);
}
