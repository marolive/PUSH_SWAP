/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:31:37 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 19:43:25 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		number;
	int 	c;
	
	stack_a = NULL;
	stack_b = NULL;
	c = argc;
	valid_arg(argc, argv);
	while(c > 1)
	{
		number = ft_atoi(argv[--c]);
		add_node(&stack_a, number, 0);
	}
	print_stack(stack_a);
	if(is_sorted(&stack_a))
		exit (0);
	if (argc == 3)
		two_sort(&stack_a);
	if (argc == 4)
		three_sort(&stack_a);
	if (argc == 5)
		four_sort(&stack_a, &stack_b);
	print_stack(stack_a);
	if (argc == 6)
		five_sort(&stack_a, &stack_b);
	print_stack(stack_a);







	
//	linha 42 (25 linhas)

	return(0);
}