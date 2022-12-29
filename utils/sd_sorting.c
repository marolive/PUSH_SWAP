/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sd_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 18:15:56 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 15:47:35 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int		verify_small(t_stack **stack)
{
	t_stack *head;
	int		small;

	head = *stack;
	small = head->number;
	while (head->next != NULL)
	{
		if (head->next->number < small)
			small = head->next->number;
		else
			head = head->next;
	}
	return (small);
}

void	four_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		small;
	
	small = verify_small(stack_a);
	while ((*stack_a)->number != small)
		reverse_rotate(stack_a, "rra\n");
	push(stack_a, stack_b, "pb\n");
	three_sort(stack_a);
	push(stack_b, stack_a, "pa\n");

}

void	five_sort(t_stack **stack_a, t_stack **stack_b)
{
	int		small;
	t_stack *node;
	
	node = *stack_a;
	small = verify_small(stack_a);
	if (node->next->next->next->next->number == small)
	{		
		reverse_rotate(stack_a, "rra\n");
		push(stack_a, stack_b, "pb\n");
		four_sort(stack_a, stack_b);
		push(stack_b, stack_a, "pa\n");
	}
	else
	{
		while ((*stack_a)->number != small)
			rotate(stack_a, "ra\n");
		push(stack_a, stack_b, "pb\n");
		four_sort(stack_a, stack_b);
		push(stack_b, stack_a, "pa\n");
	}
}