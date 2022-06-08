/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortlarg.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:46:49 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 06:22:05 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	fakett(t_stack *stack)
{
	int	i;

	i = 0;
	stack->index = malloc(stack->totala * sizeof(int));
	if (!stack)
		exit (0);
	while (i < stack->totala)
	{
		stack->index[i] = stack->table[i];
		i++;
	}
	fake_table_sort(stack);
}

void	ppb(t_stack *stack)
{
	if (stack->table[0] <= stack->var2)
	{
		pb(stack, 1);
	}
	else if (stack->table[0] <= stack->var1)
	{
		pb(stack, 1);
		if (stack->totalb >= 2)
			rb(stack, 1);
	}
	else if (stack->table[0] > stack->var1)
		ra(stack, 1);
}

int	serchmax(t_stack *stack)
{
	int	max;
	int	index;
	int	i;

	i = 0;
	index = 0;
	max = stack->tableb[0];
	while (i < stack->totalb)
	{
		if (max < stack->tableb[i])
		{
			max = stack->tableb[i];
			index = i;
		}
		i++;
	}
	return (index);
}

void	b_to_a(t_stack *stack)
{
	int	pmax;
	int	max;

	while (stack->totalb)
	{
		pmax = serchmax(stack);
		max = stack->tableb[pmax];
		if (pmax <= stack->totalb / 2)
		{
			while (max != stack->tableb[0])
				rb(stack, 1);
		}
		else
		{
			while (max != stack->tableb[0])
				rrb(stack, 1);
		}
		if (stack->tableb[0] == max)
			pa(stack, 1);
	}
}

void	the_start(t_stack *stack)
{
	while (stack->totala > 1)
	{
		fakett(stack);
		stack->var1 = stack->index[stack->totala / 15];
		stack->var2 = stack->index[(stack->totala / 15) / 2];
		ppb(stack);
		free(stack->index);
	}
	b_to_a(stack);
}
