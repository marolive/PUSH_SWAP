/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:42:18 by marolive          #+#    #+#             */
/*   Updated: 2022/12/29 19:14:09 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_repeated(char **arg)
{
	int	i;
	int	j;
	int	flag1;
	int	flag2;

	i = 1;
	flag1 = 0;
	while (arg[i])
	{
		flag2 = 0;
		j = i + 1;
		while (arg[j])
		{
			if (arg[i][0] == '+')
				flag2 = 1;
			if (arg[j][0] == '+')
				flag1 = 1;
			if (!ft_strncmp(&arg[i][flag2], &(arg[j][flag1]), 10))
				return (1);
			flag1 = 0;
			j++;
		}
		i++;
	}
	return (0);
}

int	is_sorted(t_stack **list)
{
	t_stack	*head;

	head = *list;
	while (head->next != NULL)
	{
		if (head->number > head->next->number)
			return (0);
		head = head->next;
	}
	return (1);
}

void	valid_arg(int c, char **arg)
{
	int	i;

	i = 1;
	if (c > 2)
	{
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
