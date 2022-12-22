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

void    swap(t_stack **list, char *print)
{
    t_stack *temp_a;
    t_stack *temp_b;
    
    temp_a = *list;
    temp_b = (*list)->next;
    *list = temp_b;
    temp_a->next = temp_b->next;
    temp_b->next = temp_a;
    ft_printf("%s", print);
}
