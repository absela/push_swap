/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:56 by absela            #+#    #+#             */
/*   Updated: 2022/06/08 07:45:47 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

char	*ft_strdup(const char *src)
{
	int		i;
	char	*s;

	i = 0;
	while (src[i])
		i++;
	s = (char *)malloc(i + 1);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (src[i])
	{
		s[i] = src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}

int	ft_strcmp(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] == s2[i]) && s1[i] && s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

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

void	ft_print_error(void)
{
	write(2, "Error\n", 6);
}

int	execute(char *str, t_stack *a, t_stack *b)
{
	int check;

	check = execute2();
	if (!ft_strcmp("rra\n", str))
		rra(pt, 0);
	else if (!ft_strcmp("ra\n", str))
		ra(pt, 0);
	else if (!ft_strcmp("sa\n", str))
		sa(pt, 0);
	else if (!ft_strcmp("rrb\n", str))
		rrb(pt, 0);
	else if (!ft_strcmp("rb\n", str))
		rb(pt, 0);
	else if (!ft_strcmp("sb\n", str))
		sb(pt, 0);
	else if (!ft_strcmp("pb\n", str))
		pb (pt, 0);
	else
	{
		check = 0 ;
		ft_print_error();
	}
	return (check);
}

void	checker(t_stack *pt)
{
	char	*str;
	int		check;

	check = 1;
	str = get_next_line(0);
	while (str && check)
	{
		
		// else
		// 	checker_2(pt, str);
		check = execute();
		free(str);
		if (check == 0)
		{
			
		}
		str = get_next_line(0);
	}
}

int	issorted(t_stack *pt)
{
	int	i;

	i = -1;
	while (++i < pt->totala - 1)
		if (pt->table[i] >= pt->table[i + 1])
			return (0);
	return (1);
}

int	isempty(t_stack *pt)
{
	if (pt->totalb == 0)
		return (1);
	return (0);
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
	char    **str;
	t_stack *stack_a;

	str = NULL;
	stack_a = malloc(sizeof(t_stack));
	if (!stack_a)
		return (0);
	parsing_input(ac, av, stack_a);

	if (issorted(stack_a))
		return (0);
	checker(stack_a);
	if (issorted(stack_a) && isempty(stack_a))
	{
		ft_putstr("OK");
		return (0);
	}
	else
	{
		ft_putstr("KO");
		return (0);
	}
	ffree1(str, stack_a);
	return (1);
}