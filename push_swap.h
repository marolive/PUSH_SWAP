/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:45:11 by marolive          #+#    #+#             */
/*   Updated: 2022/12/17 14:52:14 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include "libft/libft.h"
# include <stdlib.h>

typedef struct s_stack
{
	int		number;
	int		index;
	struct	s_stack *next;
}	t_stack;

int is_repeated(char **arg);
void is_number(char **arg);
void valid_arg(int c, char **arg);
void fuck_node(t_stack **list, int num, int index);
//int is_digit(int c);

#endif
