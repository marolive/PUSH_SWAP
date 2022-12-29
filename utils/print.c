/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:29:32 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 14:24:41 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void print_stack(t_stack *stack)
{
    while (stack)
    {
        ft_printf("%d -> ", stack->number);
        //ft_printf("Index: %d\n", stack->index);
        stack = stack->next;
    }
    ft_printf("NULL\n");
}

void p_error(void)
{
    write(2, "ERROR\n", 6);
    exit (0);
}