/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srting.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 06:18:05 by absela            #+#    #+#             */
/*   Updated: 2023/01/14 19:25:10 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	start_sort(t_stack	*stack)
{
	if (stack->totala <= 7)
		low_sort(stack);
	else
		sort_it(stack);
	return (0);
}
