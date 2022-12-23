/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 03:29:32 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 18:48:47 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void print_stack(t_stack *stack)
{
    while (stack)
    {
        ft_printf("Node: %d\n", stack->number);
        stack = stack->next;
    }
}

void p_error(void)
{
    write(2, "ERROR\n", 6);
    exit (0);
}