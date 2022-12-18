/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:52 by absela            #+#    #+#             */
/*   Updated: 2022/12/18 21:18:55 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	is_sorted(t_stack *stack_a)
{
	int	i;

	i = 0;
	while (stack_a->totala - 1 > i)
	{
		if (stack_a->table[i] < stack_a->table[i + 1])
			i++;
		else
			return (0);
	}
	exit (1);
}

void	check_dup(t_stack *stack_a)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack_a->totala)
	{
		j = i + 1;
		while (j < stack_a->totala)
		{
			if (stack_a->table[i] == stack_a->table[j])
				function_error();
			j++;
		}
		i++;
	}
}

void	check_im(char *str, int i, long result)
{
	if (str[i] != '\0' || result > 2147483647 || result < -2147483648)
		function_error();
}

int	ft_atoi(char *str)
{
	int		i;
	int		sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || \
		str[i] == '\v' || str[i] == '\f' || str[i] == '\r')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	check_im(str, i, result);
	return (result * sign);
}

int	*parsing_start(int ac, char **av, t_stack *stack_a)
{
	char	**jn_table;
	int		i;

	jn_table = extra(ac, av);
	i = 0;
	while (jn_table[i])
		i++;
	stack_a->totala = i;
	init_s(stack_a);
	stack_a->totalb = 0;
	i = 0;
	while (jn_table[i])
	{
		check_char(jn_table[i]);
		stack_a->table[i] = ft_atoi(jn_table[i]);
		i++;
	}
	check_dup(stack_a);
	is_sorted(stack_a);
	free_table(jn_table);
	return (stack_a->table);
}
