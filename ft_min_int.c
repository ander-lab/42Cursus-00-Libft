/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:09:27 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 15:09:57 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_min_int(int *str)
{
	int	min;
	int	aux;

	aux = 0;
	min = str[aux];
	while (str[aux])
	{
		if (min < str[aux])
			min = str[aux];
		aux++;
	}
	return (min);
}
