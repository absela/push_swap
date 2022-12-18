/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instractions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 17:59:44 by absela            #+#    #+#             */
/*   Updated: 2022/12/18 21:13:12 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	rr(t_stack *stack_a, int k)
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
	i = 0;
	rev = stack_a->tableb[0];
	while (i < stack_a->totalb)
	{
		stack_a->tableb[i] = stack_a->tableb[i + 1];
		i++;
	}
	stack_a->tableb[i - 1] = rev;
	if (k == 1)
		write(1, "rr\n", 3);
}

void	ss(t_stack *stack_a, int k)
{
	int	i;

	i = stack_a->table[1];
	stack_a->table[1] = stack_a->table[0];
	stack_a->table[0] = i;
	i = stack_a->tableb[1];
	stack_a->tableb[1] = stack_a->tableb[0];
	stack_a->tableb[0] = i;
	if (k == 1)
		write(1, "ss\n", 3);
}
