/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utilis5.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 21:03:52 by absela            #+#    #+#             */
/*   Updated: 2023/01/15 11:09:12 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

char	*ft_strdup1(const char *s1)
{
	char	*s2;
	int		i;

	i = 0;
	while (s1[i])
		i++;
	s2 = malloc(sizeof(char) * (i + 1));
	if (!s2)
		return (0);
	i = 0;
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

void	check_char(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (str[i] == '\0')
		function_error();
	while (str[i] != '\0')
	{
		if (!ft_isdigit(str[i]))
			function_error();
		i++;
	}
}

int	init_s(t_stack *stack_a)
{
	stack_a->table = malloc(stack_a->totala * sizeof(int));
	if (!stack_a->table)
		return (0);
	stack_a->tableb = malloc(stack_a->totala * sizeof(int));
	if (!stack_a->tableb)
		return (0);
	return (1);
}

char	**extra(int ac, char **av)
{
	char	**jn_table;
	char	*str;
	int		i;

	i = 0;
	if (ac < 2)
		exit(0);
	str = ft_strdup1("\0");
	while (++i < ac)
	{
		if (ft_strlen(av[i]) == 0)
			function_error();
		str = ft_strjoin(ft_strjoin(str, av[i]), " ");
	}
	jn_table = ft_split(str, ' ');
	return (jn_table);
}
