/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   largsort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 23:46:49 by absela            #+#    #+#             */
/*   Updated: 2023/01/18 20:50:01 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

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
	else
		ra(stack, 1);
}
// void ppb(t_stack *stack)
// {
	
// }

int	poistion_max(t_stack *stack)
{
	int	i;
	int	max;
	int	pmax;

	i = 0;
	max = stack->tableb[0];
	pmax = 0;
	while (i < stack->totalb)
	{
		if (stack->tableb[i] > max)
		{
			max = stack->tableb[i];
			pmax = i;
		}
		i++;
	}
	return (pmax);
}

void	sb_to_sa(t_stack *stack)
{
	int	pmax;
	int	max;

	while (stack->totalb)
	{
		pmax = poistion_max(stack);
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
	int	i;

	while (stack->totala > 1)
	{
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
		stack->var1 = stack->index[stack->totala / 8];
		stack->var2 = stack->index[(stack->totala / 9) / 2];
		ppb(stack);
		free(stack->index);
	}
	sb_to_sa(stack);
}
