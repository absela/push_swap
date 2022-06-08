/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:43 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 06:55:17 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include <stdio.h>

void	ft_free(t_stack	*stack_a)
{
	free(stack_a->table);
	free(stack_a->tableb);
	free(stack_a);
}

int	main(int arc, char **arv)
{
	t_stack	*stack_a;
	int		i;

	i = 0;
	if (arc < 2)
		return (0);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	parsing_input(arc, arv, stack_a);
	stack_a->totalb = 0;
	start_sort(stack_a);
	while (i < stack_a->totala)
	{
		printf("	%d", stack_a->table[i]);
		i++;
	}
	printf("\n");
	ft_free(stack_a);
	return (0);
}
