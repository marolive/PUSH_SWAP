/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:31:37 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 09:49:41 by marolive         ###   ########.fr       */
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
	if(is_sorted(&stack_a))
		exit (0);
	three_sort(&stack_a);







	
//	linha 42 (25 linhas)

	return(0);
}