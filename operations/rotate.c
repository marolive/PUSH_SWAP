/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:42:23 by marolive          #+#    #+#             */
/*   Updated: 2022/12/18 05:07:09 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rotate(t_stack **stack, char *print)
{
	t_stack	*head;
	t_stack	*node;
	t_stack	*header;

	head = *stack;
	node = *stack;
	header = (*stack)->next;
	while (node->next != NULL)
		node = node->next;
	(*stack) = header;
	node->next = head;
	head->next = NULL;
	ft_printf("%s", print);
}
