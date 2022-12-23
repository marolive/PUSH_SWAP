/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:45:18 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 19:01:16 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push(t_stack **stack_a, t_stack **stack_b, char *print)
{
    t_stack *temp_a;
    t_stack *temp_b;

    temp_a = *stack_a;
    temp_b = *stack_b;
    *stack_a = (*stack_a)->next;
    temp_a->next = temp_b;
    *stack_b = temp_a; 
    ft_printf("%s", print);
}