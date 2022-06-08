/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsb.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:45:08 by absela            #+#    #+#             */
/*   Updated: 2022/06/06 01:42:40 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_tablen(char **table)
{
	int	i;

	i = 0;
	while (table[i] != NULL)
		i++;
	return (i);
}

int	ft_intlen(int *table)
{
	int	i;

	i = 0;
	while (table[i])
		i++;
	return (i);
}

int	check_already_sorted(t_stack	*stack_a)
{
	int	i;

	i = 0;
	while (stack_a->table[i] && stack_a->table[i + 1] && stack_a->totala > i)
	{
		if (stack_a->table[i] < stack_a->table[i + 1])
		i++;
		else
			return (0);
	}
	exit (0);
}

void	checkspacearg(char	*str)
{
	int	i;
	int	space;

	i = 0;
	space = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ')
			space++;
		i++;
	}
	if (space == i)
		function_error();
}
