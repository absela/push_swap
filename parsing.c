/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:52 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 06:50:16 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

void	function_error(void)
{
	ft_putstr("Error\n");
	exit(0);
}

static int	conver(char *str)
{
	int		i;
	int		k;
	long	j;

	i = 0;
	j = 0;
	k = 1;
	if ((str[i] == '-') || (str[i] == '+'))
	{
		if (str[i] == '-')
			k = -1;
		i++;
	}
	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			j = (j * 10) + (str[i] - '0');
			i++;
		}
	}
	j = j * k;
	convertc(str, i, j);
	return (j);
}

static void	checkchara(char *str)
{
	int	i;
	int	k;

	i = 0;
	k = 0;
	if (str[i] == '-' || str[i] == '+' )
		i++;
	if (str[i] == '\0')
		function_error();
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
			function_error();
	i++;
	}
}

void	check_for_duplicate(t_stack *stack_a)
{
	int	u;
	int	k;

	u = stack_a->totala - 1;
	while (u >= 0)
	{
		k = u - 1;
		while (k >= 0)
		{
			if (stack_a->table[u] == stack_a->table[k])
				function_error();
			k--;
		}
		u--;
	}
}

int	*parsing_input(int arc, char **arv, t_stack	*stack_a)
{
	char		**argument_table;
	int			i;

	i = 0;
	if (arc < 2)
		return (0);
	argument_table = gather_argument(arv, arc);
	stack_a->table = malloc((ft_tablen(argument_table) + 1) * sizeof(int));
	if (!stack_a->table)
		exit (0);
	stack_a->totala = ft_tablen(argument_table);
	stack_a->tableb = malloc (((stack_a->totala + 1) * sizeof(int)));
	while (argument_table[i])
	{
		checkchara(argument_table[i]);
		stack_a->table[i] = conver(argument_table[i]);
		i++;
	}
	check_for_duplicate(stack_a);
	check_already_sorted(stack_a);
	free_table(argument_table);
	return (stack_a->table);
}
