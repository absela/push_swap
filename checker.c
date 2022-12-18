/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:56 by absela            #+#    #+#             */
/*   Updated: 2022/12/18 13:21:12 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

char	*get_next_line(int fd)
{
	char	str[8000000];
	int		i;
	char	buff[1];
	int		byte;

	byte = read(fd, buff, 1);
	i = 0;
	while (byte > 0)
	{
		str[i++] = buff[0];
		if (buff[0] == '\n')
			break ;
		byte = read(fd, buff, 1);
	}
	str[i] = '\0';
	if (str[0] == '\0')
		return (0);
	return (ft_strdup(str));
}

void	checker_2(t_stack *data, char *str)
{
	if (!ft_strcmp("pa\n", str))
		pa(data, 0);
	else if (!ft_strcmp("rr\n", str))
		rr(data, 0);
	else if (!ft_strcmp("rra\n", str))
		rra(data, 0);
	else if (!ft_strcmp("rrr\n", str))
		rrr(data, 0);
	else if (!ft_strcmp("ss\n", str))
		ss(data, 0);
	else
	{
		write(2, "Error\n", 6);
		exit (1);
	}
}

void	checker(t_stack *data)
{
	char	*str;

	str = get_next_line(0);
	while (str)
	{
		if (!ft_strcmp("ra\n", str))
			ra(data, 0);
		else if (!ft_strcmp("sa\n", str))
			sa(data, 0);
		else if (!ft_strcmp("rrb\n", str))
			rrb(data, 0);
		else if (!ft_strcmp("rb\n", str))
			rb(data, 0);
		else if (!ft_strcmp("sb\n", str))
			sb(data, 0);
		else if (!ft_strcmp("pb\n", str))
			pb(data, 0);
		else
			checker_2(data, str);
		str = get_next_line(0);
	}
}

void	ffree1(char **str, t_stack *pt)
{
	int	i;

	i = -1;
	while (str[++i])
		free(str[i]);
	free(str);
	free(pt->table);
	free(pt);
}

int	main(int ac, char **av)
{
	char	**str;
	t_stack	*stack_a;

	str = NULL;
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	parsing_start(ac, av, stack_a);
	checker(stack_a);
	if (issorted(stack_a) && isempty(stack_a))
	{
		ft_putstr("OK\n");
		return (0);
	}
	else
	{
		ft_putstr("KO\n");
		return (0);
	}
	ffree1(str, stack_a);
	return (1);
}
