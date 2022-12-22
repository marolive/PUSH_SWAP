/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 04:45:18 by marolive          #+#    #+#             */
/*   Updated: 2022/12/18 05:00:50 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    push(t_stack **stack_a, t_stack **stack_b, char *print)
{
    t_stack *temp_a;
    t_stack *temp_s;

    temp_a = *stack_a;
    temp_s = (*stack_a)->next;
    *stack_b = temp_a;
    (*stack_a) = temp_s;
    temp_a->next = NULL;
    ft_printf("%s", print);
}

