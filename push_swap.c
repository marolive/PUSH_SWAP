/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:31:37 by marolive          #+#    #+#             */
/*   Updated: 2022/12/21 20:51:04 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		number;
	int		index;
	
	stack_a = NULL;
	stack_b = NULL;
	index = argc;
	valid_arg(argc, argv);
	while(index > 1)
	{
		number = ft_atoi(argv[--index]);
		add_node(&stack_a, number, 0);
	}
	print_stack(stack_a);
	if (argc == 3)
		swap(&stack_a, "sa\n");
	print_stack(stack_a);
/*	rotate(&stack_a, "ra\n");
	print_stack(stack_a);
	reverse_rotate(&stack_a, "rra\n");
	print_stack(stack_a);
	push(&stack_a, &stack_b, "pa\n");
	print_stack(stack_a);
	ft_printf("B\n");
	print_stack(stack_b);*/
	return(0);
}
