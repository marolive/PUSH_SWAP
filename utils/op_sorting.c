/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   op_sorting.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/23 04:13:21 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 08:41:35 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void    three_sort(t_stack **a)
{
	while(*a)
	{
		if (((*a)->index > (*a)->next->index)
			&& ((*a)->index < (*a)->next->next->index))
        	swap(a, "sa\n");
		else if (((*a)->index > (*a)->next->index)
        	&& ((*a)->index > (*a)->next->next->index))
        	rotate(a, "ra\n");
    	else
        	reverse_rotate(a, "rra\n");
	}
}

/*void    sorting(t_stack **a, t_stack **b, int c)
{
    if (c == 3)
        swap(a, "sa\n");
    
}*/
