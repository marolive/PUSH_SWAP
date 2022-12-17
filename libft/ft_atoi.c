/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 08:48:45 by marolive          #+#    #+#             */
/*   Updated: 2022/12/16 20:52:10 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int iss_digit(char c)
{
    if(c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

long	ft_atoi(const char *str)
{
	long			resul;
	unsigned int	i;
	long			neg;

	neg = 1;
	resul = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (str[i])
	{
		if (!iss_digit(str[i]))
		{
			resul = 2147483650;
			break ;
		}
		resul = resul * 10 + str[i] - '0';
		i++;
	}
	resul = resul * neg;
	if (resul > INT_MAX || resul < INT_MIN)
		print_error("ERROR");
	return (resul);
}
