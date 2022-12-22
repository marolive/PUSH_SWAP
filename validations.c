/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validations.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/18 02:42:18 by marolive          #+#    #+#             */
/*   Updated: 2022/12/21 22:14:41 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int is_repeated(char **arg)
{
	int i;
	int j;
	
	i = 1;
	while (arg[i])
	{
		j = i + 1;
		while (arg[j])
		{
			if (!ft_strncmp(arg[i], arg[j], 10))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int is_sorted(char **arg)
{
	int i;
	int j;
	
	i = 1;
	while (arg[i])
	{
		j = i + 1;
		if (ft_strncmp(arg[i], arg[j], 10) == -1)
			return (0);
		i++;			
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
			if (!is_sorted(arg));
				ft_printf("ordenada\n");
			if (is_repeated(arg))
				p_error();
			if (!ft_isdigit(arg))
				p_error();
			i++;
		}
	}
}
