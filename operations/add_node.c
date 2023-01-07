/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:42:39 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 12:54:00 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"  

void	add_node(t_stack **list, int data, int index)
{
	t_stack	*node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->number = data;
	node->index = index;
	node->next = *list;
	*list = node;
}

void	stack_index(t_stack **stack)
{
	int		index;
	t_stack	*temp;
	t_stack	*list;

	temp = *stack;
	list = *stack;
	while (list)
	{
		index = 1;
		while (temp)
		{
			if (list->number > temp->number)
				index++;
			temp = temp->next;
		}
		list->index = index;
		temp = *stack;
		list = list->next;
	}
}
