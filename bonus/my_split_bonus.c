/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_split_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 20:11:34 by absela            #+#    #+#             */
/*   Updated: 2023/01/16 20:54:15 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

int	checksep(char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	countwords(char *str, int c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			count++;
			while (str[i] != c && str[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

char	**my_split(char *str, int c, int i, int j)
{
	char	**tab;
	int		k;

	k = 0;
	tab = malloc(sizeof(char *) * (countwords(str, c) + 1));
	if (!tab)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			tab[j] = malloc(sizeof(char) * (countwords(str, c) + 1));
			if (!tab[j])
				return (0);
			while (str[i] != c && str[i] != '\0')
				tab[j][k++] = str[i++];
			tab[j++][k] = '\0';
			k = 0;
		}
		else
			i++;
	}
	tab[j] = NULL;
	free(str);
	return (tab);
}
