/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/17 13:31:37 by marolive          #+#    #+#             */
/*   Updated: 2023/01/06 22:48:29 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;
	int		number;
	int		c;

	stack_a = NULL;
	stack_b = NULL;
	if (argc > 1)
	{
		c = argc;
		valid_arg(argc, argv);
		while (c > 1)
		{
			number = ft_atoi(argv[--c]);
			add_node(&stack_a, number, 0);
		}
		stack_index(&stack_a);
		if (is_sorted(&stack_a))
			clear_stack(&stack_a);
		sorting(&stack_a, &stack_b, argc);
		clear_stack(&stack_a);
	}
	return (0);
}
