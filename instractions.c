/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:29 by absela            #+#    #+#             */
/*   Updated: 2022/12/18 13:45:23 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sb(t_stack *stack_a, int k)
{
	int	i;

	i = stack_a->tableb[1];
	stack_a->tableb[1] = stack_a->tableb[0];
	stack_a->tableb[0] = i;
	if (k == 1)
		write(1, "sb\n", 3);
}

void	pb(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = 0;
	if (k == 0)
		return ;
	if (stack_a->totala < 1)
		exit(0);
	stack_a->totalb++;
	rev = stack_a->table[0];
	while (i < stack_a->totala - 1)
	{
		stack_a->table[i] = stack_a->table[i + 1];
		i++;
	}
	i = stack_a->totalb;
	while (i > 0)
	{
		stack_a->tableb[i] = stack_a->tableb[i - 1];
		i--;
	}
	stack_a->tableb[i] = rev;
	stack_a->totala--;
	write(1, "pb\n", 3);
}

void	rb(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = 0;
	rev = stack_a->tableb[0];
	if (k == 0)
		return ;
	while (i < stack_a->totalb)
	{
		stack_a->tableb[i] = stack_a->tableb[i + 1];
		i++;
	}
	stack_a->tableb[i - 1] = rev;
	write(1, "rb\n", 3);
}

void	rrb(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = stack_a->totalb - 1;
	rev = stack_a->tableb[i];
	if (k == 0)
		return ;
	while (i > 0)
	{
		stack_a->tableb[i] = stack_a->tableb[i - 1];
		i--;
	}
	stack_a->tableb[0] = rev;
	write(1, "rrb\n", 4);
}
