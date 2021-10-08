/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Alejandro <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/05 23:45:28 by Alejandro         #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2021/10/08 18:56:09 by ajimenez         ###   ########.fr       */
=======
/*   Updated: 2021/10/03 18:48:15 by ajimenez         ###   ########.fr       */
>>>>>>> 8146c5a9e2f9b6f4626e04ada5046e6b508171ee
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char c)
{
	size_t	trigger;
	int		count;

	count = 0;
	if (str[0] && str[0] != c)
		count++;
	trigger = 0;
	while (trigger < ft_strlen(str))
	{
		if (str[trigger] == c && str[trigger + 1] && str[trigger + 1] != c)
			count++;
		trigger++;
	}
	return (count);
}

static int	lenght_str(char const *s, char c, int aux)
{
	int	len;

	len = 0;
	while (s[aux] == c && s[aux])
		aux++;
	while (s[aux] != c && s[aux])
	{
		aux++;
		len++;
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	int		index;
	int		sub_index;
	int		aux;
	char	**split;

	if (!s)
		return (NULL);
	split = ft_calloc(sizeof(char *), (count_words(s, c) + 1));
	if (!split)
		return (NULL);
	index = -1;
	aux = 0;
	while (++index < count_words(s, c))
	{
		split[index] = malloc((sizeof(char) * lenght_str(s, c, aux)) + 1);
		if (!split[index])
			return (0);
		sub_index = 0;
		while (s[aux] == c && s[aux] != '\0')
			aux++;
		while (s[aux] != c && s[aux] != '\0')
			split[index][sub_index++] = s[aux++];
		split[index][sub_index] = '\0';
	}
	return (split);
}
/*
int main(void)
{
	char **splited;
	char *inicial;
	size_t i;

	i = 0;
	inicial = "hola.me.llamo.alex";
	splited = ft_split(inicial, '.');
	while (i<=4)
	{
		printf("%s", splited[i]);
		printf("\n");
		++i;
	}
}*/
