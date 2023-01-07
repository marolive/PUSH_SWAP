/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 14:16:18 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 18:52:21 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sorting(t_stack **stack_a, t_stack **stack_b, int c)
{
	if (c == 3)
		two_sort(stack_a);
	if (c == 4)
		three_sort(stack_a);
	if (c == 5)
		four_sort(stack_a, stack_b);
	if (c == 6)
		five_sort(stack_a, stack_b);
	if (c > 6)
		radix_sort(stack_a, stack_b);
}
