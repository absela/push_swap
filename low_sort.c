/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   low_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 17:40:18 by absela            #+#    #+#             */
/*   Updated: 2023/01/15 13:53:01 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sort2(t_stack *stack)
{
	if (stack->table[0] > stack->table[1])
		ra(stack, 1);
}

void	sort3(t_stack *stack)
{
	if (stack->table[0] < stack->table[1] && stack->table[1] > stack->table[2]
		&& stack->table[0] < stack->table[2])
	{
		sa(stack, 1);
		ra(stack, 1);
	}
	else if (stack->table[0] > stack->table[1]
		&& stack->table[1] < stack->table[2]
		&& stack->table[0] < stack->table[2])
		sa(stack, 1);
	else if (stack->table[0] < stack->table[1]
		&& stack->table[1] > stack->table[2]
		&& stack->table[0] > stack->table[2])
		rra(stack, 1);
	else if (stack->table[0] > stack->table[1]
		&& stack->table[1] > stack->table[2]
		&& stack->table[0] > stack->table[2])
	{
		sa(stack, 1);
		rra(stack, 1);
	}
	else if (stack->table[0] > stack->table[1]
		&& stack->table[1] < stack->table[2]
		&& stack->table[0] > stack->table[2])
		ra(stack, 1);
}

int	low_positon(t_stack *stack)
{
	int	i;
	int	low;
	int	position;

	i = 0;
	low = stack->table[0];
	position = 0;
	while (i < stack->totala)
	{
		if (stack->table[i] < low)
		{
			low = stack->table[i];
			position = i;
			i = 0;
		}
		i++;
	}
	return (position);
}

void	low_sort(t_stack *stack)
{
	int	position;

	if (stack->totala == 2)
		sort2(stack);
	else if (stack->totala == 3)
		sort3(stack);
	else
	{
		position = low_positon(stack);
		while (position != 0)
		{
			if (position <= stack->totala / 2)
				ra(stack, 1);
			else
				rra(stack, 1);
			position = low_positon(stack);
		}
		pb(stack, 1);
		low_sort(stack);
		int i = 0 ;
		while (stack->totalb > i)
		{
			printf("%d\n", stack->tableb[i]);
			i++;
		}
		pa(stack, 1);
	}
}
