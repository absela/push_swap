/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_header.h                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/05 20:44:56 by absela            #+#    #+#             */
/*   Updated: 2022/06/09 05:04:52 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_HEADER_H
# define PUSH_SWAP_HEADER_H

# include "push_swap_header.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stddef.h>

typedef struct s_tack
{
	int	*table;
	int	*tableb;
	int	*index;
	int	totala;
	int	totalb;
	int	var1;
	int	var2;
}t_stack;

void	push_swap(char **taba);
int		isempty(t_stack *pt);
void	free_table(char **argument_table);
int		start_sort(t_stack *stack);
void	the_start(t_stack *stack);
void	fakett(t_stack *stack);
char	**ft_split(char const *s, char c);
void	sort_it(t_stack	*stack);
int		ft_atoi(const char *str);
int		ft_putchar(char c);
void	sort5(t_stack	*stack);
void	sort2(t_stack *stack);
void	sort3(t_stack *stack);
int		ft_putstr(char	*str);
int		ft_putnbr(int n);
void	function_error(void);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strlen(char	*str);
char	**gather_argument(char **stack_a, int number_argument);
int		ft_tablen(char **table);
int		*parsing_input(int arc, char **arv, t_stack	*stack_a);
int		check_already_sorted(t_stack *stack_a);
int		ft_intlen(int *table);
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
void	sort5(t_stack	*stack);
int		searchthelow(t_stack *stack);
void	checkspacearg(char	*str);
void	sort_it(t_stack *stack);
void	convertc(char *str, int i, int j);
void	fake_table_sort(t_stack *stack);

#endif
