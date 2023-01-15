/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:43 by absela            #+#    #+#             */
/*   Updated: 2023/01/15 13:51:52 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"
#include <stdio.h>

static void	ft_free(t_stack	*stack_a)
{
	free(stack_a->table);
	free(stack_a->tableb);
	free(stack_a);
}

int	main(int ac, char **av)
{
	t_stack	*stack_a;
	int		i;

	i = 0;
	if (ac < 2)
		return (0);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	parsing_start(ac, av, stack_a);
	start_sort(stack_a);
	while (stack_a->totala > i)
	{
		printf("%d\n", stack_a->table[i]);
		i++;
	}
	ft_free(stack_a);
	return (0);
}
