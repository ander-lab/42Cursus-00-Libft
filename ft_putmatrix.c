/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putmatrix.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajimenez <ajimenez@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 18:46:56 by ajimenez          #+#    #+#             */
/*   Updated: 2021/10/08 19:00:01 by ajimenez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putmatrix(char **s, size_t lines)
{
	size_t	aux;

	aux = 0;
	while (aux < lines)
	{
		ft_putstr_fd(s[aux], 1);
		aux++;
		write (1, "\n", 1);
	}
}

int main(void)
{
	char **str;
	char *s;

	s = "hola me llamo alex";
	str = ft_split(s, ' ');
	ft_putmatrix(str, 4);
	return 0;
}
