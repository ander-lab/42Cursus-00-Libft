/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max_int.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 15:00:29 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 18:25:24 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_max_int(int *str)
{
	int	max;
	int	aux;

	aux = 0;
	max = str[aux];
	while (str[aux])
	{
		if (max < str[aux])
			max = str[aux];
		aux++;
	}
	return (max);
}
