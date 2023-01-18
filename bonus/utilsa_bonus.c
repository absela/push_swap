/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsa_bonus.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:45:02 by absela            #+#    #+#             */
/*   Updated: 2023/01/15 15:35:15 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap_header.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		i;
	int		j;

	j = 0;
	i = 0;
	if (s1 == NULL)
		return (NULL);
	result = malloc((ft_strlen((char *)s1) + ft_strlen((char *)s2))
			* sizeof(char) + 1);
	if (!result)
		return (0);
	while (s1[i] != '\0')
	{
		result[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
		result[i++] = s2[j++];
	result[i] = '\0';
	free((char *)s1);
	return (result);
}

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (i < ft_strlen(str))
	{
		ft_putchar(str[i]);
		i++;
	}
	return (0);
}

void	free_table(char **argument_table)
{
	int	i;

	i = 0;
	while (i < ft_tablen(argument_table))
	{
		free(argument_table[i]);
		i++;
	}
	free(argument_table);
}

void	function_error(void)
{
	ft_putstr("Error\n");
	exit(0);
}
