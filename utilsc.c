/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:45:15 by absela            #+#    #+#             */
/*   Updated: 2022/12/18 21:01:07 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	fake_table_sort(t_stack *stack)
{
	int	i;
	int	rev;
	int	j;

	i = 0;
	while (i < stack->totala - 1)
	{
		j = 0;
		while (j < stack->totala - 1)
		{
			if (stack->index[j] > stack->index[j + 1])
			{
				rev = stack->index[j + 1];
				stack->index[j + 1] = stack->index[j];
				stack->index[j] = rev;
			}
			j++;
		}
		i++;
	}
}

void	sort_it(t_stack	*stack)
{
	the_start(stack);
}
