/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/06 09:41:15 by marolive          #+#    #+#             */
/*   Updated: 2022/12/16 21:02:17 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(char **arg)
{
	int i;
	int j;
	int sig;
	
	i = 1;
	while (arg[i])
	{
		sig = 0;
		j = 0;
		while (arg[i][j])
		{
			if ((arg[i][j] == '-' || arg[i][j] == '+') && sig != 1)
			{
				j++;
				sig = 1;
			}
			else if ((arg[i][j] >= '0' && arg[i][j] <= '9' && arg[i][j + 1] != '-' && arg[i][j + 1] != '+') || (arg[i][j+1] == '\0'))
			{
				sig = 0;
				j++;
			}
			else
				return (0);
		}
		if (sig > 0)
			return (0);
		i++;
	}
	return (1);
}