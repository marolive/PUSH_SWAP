/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:03:49 by marolive          #+#    #+#             */
/*   Updated: 2022/12/18 04:53:05 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	swap(t_stack **stack, char *print)
{
	t_stack	*temp_a;
	t_stack	*temp_b;

	temp_a = *stack;
	temp_b = (*stack)->next;
	*stack = temp_b;
	temp_a->next = temp_b->next;
	temp_b->next = temp_a;
	ft_printf("%s", print);
}
