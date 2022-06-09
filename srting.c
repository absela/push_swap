/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srting.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: absela <absela@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 06:18:05 by absela            #+#    #+#             */
/*   Updated: 2022/06/09 05:08:15 by absela           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap_header.h"

int	start_sort(t_stack	*stack)
{
	if (stack->totala == 2)
		sort2(stack);
	if (stack->totala == 3)
		sort3(stack);
	if (stack->totala <= 7)
		sort5(stack);
	else
		sort_it(stack);
	return (0);
}
