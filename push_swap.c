/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:31:37 by marolive          #+#    #+#             */
/*   Updated: 2022/12/18 10:12:01 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		number;
	
	stack_a = NULL;
	stack_b = NULL;
	valid_arg(argc, argv);
	while(argc > 1)
	{
		number = ft_atoi(argv[--argc]);
		add_node(&stack_a, number, 0);
	}
	print_stack(stack_a);
	swap(&stack_a, "sa\n");
	print_stack(stack_a);
	rotate(&stack_a, "ra\n");
	print_stack(stack_a);
	reverse_rotate(&stack_a, "rra\n");
	print_stack(stack_a);
	return(0);
}