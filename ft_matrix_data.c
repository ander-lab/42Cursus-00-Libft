/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_matrix_data.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 15:04:29 by ajimenez          #+#    #+#             */
/*   Updated: 2021/12/12 18:03:45 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

static size_t	*ft_length(char **matrix)
{
	size_t	aux;
	size_t	*length_str;

	aux = 0;
	length_str = malloc(sizeof(size_t) * (ft_matrixlen(matrix) + 1));
	if (!length_str)
		return (0);
	while (matrix[aux] != NULL)
	{
		length_str[aux] = ft_strlen(matrix[aux]);
		aux++;
	}
	return (length_str);
}

t_matrix_data	ft_matrix_data(char **matrix)
{
	t_matrix_data	matrix_data;

	if (!matrix)
		return (matrix_data);
	matrix_data.line_count = ft_matrixlen(matrix);
	matrix_data.lenght_str = ft_length(matrix);
	return (matrix_data);
}
