/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_node.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:42:39 by marolive          #+#    #+#             */
/*   Updated: 2022/12/18 03:09:04 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"  

void add_node(t_stack **list, int data, int index)
{
	t_stack *node;

	node = (t_stack *)malloc(sizeof(t_stack));
	if (!node)
		return ;
	node->number = data;
	node->index = index;
	node->next = *list;
	*list = node;
}
