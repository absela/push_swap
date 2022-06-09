/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:38:35 by absela            #+#    #+#             */
/*   Updated: 2022/06/09 04:55:57 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sa(t_stack *stack_a, int k)
{
	int	i;

	i = stack_a->table[1];
	stack_a->table[1] = stack_a->table[0];
	stack_a->table[0] = i;
	if (k == 1)
		write(1, "sa\n", 3);
}

void	pa(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = 0;
	rev = stack_a->tableb[0];
	while (i < stack_a->totalb)
	{
		stack_a->tableb[i] = stack_a->tableb[i + 1];
		i++;
	}
	i = stack_a->totala;
	while (i > 0)
	{
		stack_a->table[i] = stack_a->table[i - 1];
		i--;
	}
	stack_a->table[0] = rev;
	stack_a->totalb--;
	stack_a->totala++;
	if (k == 1)
		write(1, "pa\n", 3);
}

void	ra(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = 0;
	rev = stack_a->table[0];
	while (i < stack_a->totala)
	{
		stack_a->table[i] = stack_a->table[i + 1];
		i++;
	}
	stack_a->table[i - 1] = rev;
	if (k == 1)
		write(1, "ra\n", 3);
}

void	rra(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = stack_a->totala - 1;
	rev = stack_a->table[i];
	while (i > 0)
	{
		stack_a->table[i] = stack_a->table[i - 1];
		i--;
	}
	stack_a->table[0] = rev;
	if (k == 1)
		write(1, "rra\n", 4);
}
