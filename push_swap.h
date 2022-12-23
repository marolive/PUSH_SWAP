/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:45:11 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 08:40:25 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"

typedef struct s_stack
{
	int		number;
	int		index;
	struct	s_stack *next;
}	t_stack;

void	add_node(t_stack **list, int data, int index);
void	print_stack(t_stack *stack);
void	valid_arg(int c, char **arg);
void	p_error(void);
void	swap(t_stack **stack, char *print);
void	rotate(t_stack **stack, char *print);
void	reverse_rotate(t_stack **stack, char *print);
void    push(t_stack **stack_a, t_stack **stack_b, char *print);
int		is_sorted(t_stack **list);
void    three_sort(t_stack **a);
//void    sorting(t_stack **a, t_stack **b, int c);

#endif
