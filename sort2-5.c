/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort2-5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:46:35 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 06:53:26 by absela           ###   ########.fr       */
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

int	searchthelow(t_stack *stack)
{
	int	i;
	int	low;
	int	position;

	low = stack->table[0];
	position = 0;
	i = 0;
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

void	continuesort5(t_stack *stack)
{
	sort3(stack);
	while (stack->totalb > 0)
		pa(stack, 1);
}

void	sort5(t_stack	*stack)
{
	int	i;

	i = 0;
	while (stack->totala > 3)
	{
		i = searchthelow(stack);
		if (i <= (stack->totala / 2))
		{
			while (i != 0)
			{
				ra(stack, 1);
				i--;
			}
		}
		else if (i > (stack->totala / 2))
		{
			while (i < stack->totala)
			{
				rra(stack, 1);
				i++;
			}
		}
		pb(stack, 1);
	}
	continuesort5(stack);
}
