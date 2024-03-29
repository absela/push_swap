/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:43 by absela            #+#    #+#             */
/*   Updated: 2023/01/18 17:48:53 by absela           ###   ########.fr       */
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

	if (ac < 2)
		return (0);
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	parsing_start(ac, av, stack_a);
	if (stack_a->totala <= 7)
		low_sort(stack_a);
	else
		sort_it(stack_a);
	ft_free(stack_a);
	return (0);
}
