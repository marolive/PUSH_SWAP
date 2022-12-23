/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marolive <marolive@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 08:48:45 by marolive          #+#    #+#             */
/*   Updated: 2022/12/23 09:49:16 by marolive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int is_dig(char c)
{
    if(c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

static int verify_digit(const char str, long dest)
{
	if (!is_dig(str))
    {
        dest = 2147483650;
        return (dest);
    }
    return (1);
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
		verify_digit(str[i], resul);
		resul = resul * 10 + str[i] - '0';
		i++;
	}
	resul = resul * neg;
	if (resul > INT_MAX || resul < INT_MIN)
		print_error("ERROR");
	return (resul);
}