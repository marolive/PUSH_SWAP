/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 05:01:33 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 10:38:26 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    reverse_rotate(t_stack **stack, char *print)
{
    t_stack *last;
    t_stack *node;
    
    last = *stack;
    node = *stack;
    while(node->next != NULL)
    {
        if (node->next->next == NULL)
            last = node;
        node = node->next;
    }
    node->next = *stack;
    last->next = NULL;
    *stack = node;
    ft_printf("%s", print);
}