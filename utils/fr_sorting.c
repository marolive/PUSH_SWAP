/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 04:13:21 by marolive          #+#    #+#             */
/*   Updated: 2023/01/06 14:00:56 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	two_sort(t_stack **stack)
{
	swap(stack, "sa\n");
}

static void	doble_op(char s, t_stack **stack)
{
	if (s == 's')
	{
		swap(stack, "sa\n");
		rotate(stack, "ra\n");
	}
	if (s == 'f')
	{
		swap(stack, "sa\n");
		reverse_rotate(stack, "rra\n");
	}
}

void	three_sort(t_stack **stack_a)
{
	t_stack	*head;
	int		first;
	int		second;
	int		thrid;

	head = *stack_a;
	first = head->number;
	second = head->next->number;
	thrid = head->next->next->number;
	if (first < second && first < thrid && second > thrid)
		doble_op('s', stack_a);
	if (second < first && second < thrid)
	{
		if (first < thrid)
			swap(stack_a, "sa\n");
		else
			rotate(stack_a, "ra\n");
	}
	if (thrid < first && thrid < second)
	{
		if (first < second)
			reverse_rotate(stack_a, "rra\n");
		else
			doble_op('f', stack_a);
	}
}
