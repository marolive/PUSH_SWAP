/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:42:18 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 03:54:51 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_repeated(char **arg)
{
	int i;
	int j;
	int flag;

	i = 1;
	flag = 0;
	while (arg[i])
	{
		j = i + 1;
		while (arg[j])
		{
			if (arg[j][0] == '+')
				flag = 1;
			if (!ft_strncmp(arg[i], &(arg[j][flag]), 10))
				return (1);
			flag = 0;
			j++;
		}
		i++;
	}
	return (0);
}

int is_sorted(t_stack **list)
{
	t_stack *head;
	
	head = *list;
	while (head->next != NULL)
	{
		if(head->number > head->next->number)
			return (0);
		head = head->next;
	}
	return (1);
}

void valid_arg(int c, char **arg)
{
	int i;
	int j;

	i = 1;
	if (c > 2)
	{
		j = 2;
		while (arg[i])
		{
			if (!ft_isdigit(arg))
				p_error();
			if (is_repeated(arg))
				p_error();
			i++;
		}
	}
}
