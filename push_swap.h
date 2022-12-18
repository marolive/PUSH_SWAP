/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:45:11 by marolive          #+#    #+#             */
/*   Updated: 2022/12/18 10:04:35 by marolive         ###   ########.fr       */
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

#endif
