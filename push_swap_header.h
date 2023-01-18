/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:56 by absela            #+#    #+#             */
/*   Updated: 2023/01/18 20:59:45 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include "push_swap_header.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_stack
{
	int	*table;
	int	*tableb;
	int	*index;
	int	totala;
	int	totalb;
	int	var1;
	int	var2;
}t_stack;

int		init_s(t_stack *stack_a);
int		check_speces(char *str);
char	**my_split(char *str, int c, int i, int j);
int		ft_isdigit(int c);
char	*ft_strdup1(const char *s1);
void	check_char(char *str);
char	**extra(int ac, char **av);
void	function_error(void);
void	free_table(char **argument_table);
int		isempty(t_stack *pt);
void	parsing_start(int ac, char **av, t_stack *stack_a);
int		start_sort(t_stack *stack);
void	the_start(t_stack *stack);
void	sort_it(t_stack	*stack);
int		ft_atoi(char *str);
int		ft_putchar(char c);
void	sort2(t_stack *stack);
void	sort3(t_stack *stack);
int		ft_putstr(char	*str);
void	function_error(void);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(char	*str);
int		ft_tablen(char **table);
void	sort2(t_stack *stack);
void	sort3(t_stack *stack);
void	sort_it(t_stack	*stack);
void	ra(t_stack *stack_a, int k);
void	sb(t_stack *stack_a, int k);
void	ss(t_stack *stack_a, int k);
void	pb(t_stack *stack_a, int k);
void	rra(t_stack *stack_a, int k);
void	rrb(t_stack *stack_a, int k);
void	rrr(t_stack *stack_a, int k);
void	rb(t_stack *stack_a, int k);
void	rb(t_stack *stack_a, int k);
void	rr(t_stack *stack_a, int k);
void	pa(t_stack *stack_a, int k);
void	sa(t_stack *stack_a, int k);
int		issorted(t_stack *pt);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *src);
void	sort_it(t_stack *stack);
void	fake_table_sort(t_stack *stack);
void	low_sort(t_stack *stack);

#endif
