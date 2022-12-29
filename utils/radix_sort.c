/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/29 10:27:55 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 13:38:17 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int count_stack(t_stack **stack)
{
	t_stack *head;
	int i;

	head = *stack;
	i = 0;
	while (head != NULL)
	{
		i++;
		head = head->next;
	}
	return(i);
}

void	radix_sort(t_stack **stack_a, t_stack **stack_b)
{
	int count;
	int bit;

	bit = 0;
	while (!is_sorted(stack_a))
	{
		count = count_stack(stack_a);
		while(count)
		{
			if ((*stack_a)->index & (1 << bit))
			{
				rotate(stack_a, "ra\n");
			}
			else
			{
				push(stack_a, stack_b, "pb\n");
			}
			count--;
		}
		bit++;
		while(*stack_b)
			push(stack_b, stack_a, "pa\n");
	}
}
