/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/04 01:38:35 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 06:08:35 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	sa(t_stack *stack_a, int k)
{
	int	i;

	i = stack_a->table[1];
	if(k == 0)
		return ;
	stack_a->table[1] = stack_a->table[0];
	stack_a->table[0] = i;
	write(1, "sa\n", 3);
}

void	pa(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = 0;
	rev = stack_a->tableb[0];
	if(k == 0)
		return ;
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
	write(1, "pa\n", 3);
}

void	ra(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	
	i = 0;
	rev = stack_a->table[0];
	if(k == 0)
		return ;
	if(k == 0)
		return ;
	while (i < stack_a->totala)
	{
		stack_a->table[i] = stack_a->table[i + 1];
		i++;
	}
	stack_a->table[i - 1] = rev;
	write(1, "ra\n", 3);
}

void	rra(t_stack *stack_a, int k)
{
	int	rev;
	int	i;

	i = stack_a->totala - 1;
	rev = stack_a->table[i];
	if(k == 0)
		return ;
	while (i > 0)
	{
		stack_a->table[i] = stack_a->table[i - 1];
		i--;
	}
	stack_a->table[0] = rev;
	write(1, "rra\n", 4);
}
