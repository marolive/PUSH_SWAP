/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:31:37 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 17:14:30 by marolive         ###   ########.fr       */
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
	stack_index(&stack_a);
	if(is_sorted(&stack_a))
		exit (0);
	sorting(&stack_a, &stack_b, argc);
	return(0);
}