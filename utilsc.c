/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilsc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:45:15 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 06:20:49 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

void	convertc(char *str, int i, int j)
{
	if (j > 2147483647 || j < -2147483648 || i > 11)
		function_error();
	if (str[i] <= '0' && str[i] >= '9')
		function_error();
}

void	free_table(char **argument_table)
{
	int	i;

	i = 0;
	while (i < ft_tablen(argument_table))
	{
		free(argument_table[i]);
		i++;
	}
	free(argument_table);
}

void	fake_table_sort(t_stack *stack)
{
	int	i;
	int	rev;
	int	j;

	i = 0;
	while (i < stack->totala - 1)
	{
		j = 0;
		while (j < stack->totala - 1)
		{
			if (stack->index[j] > stack->index[j + 1])
			{
				rev = stack->index[j + 1];
				stack->index[j + 1] = stack->index[j];
				stack->index[j] = rev;
			}
			j++;
		}
		i++;
	}
}

void	sort_it(t_stack	*stack)
{
	the_start(stack);
}
