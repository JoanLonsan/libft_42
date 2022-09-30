/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:43:06 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/30 13:30:29 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	sign = 1;
	while ((*str >= 8 && *str <= 14) || *str == 32)
		++str;
	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
			sign *= -1;
			++str;
		}
		else if (*str != '-')
			++str;
	}
	while (ft_isdigit(*str))
	{
		result = (result * 10) + (*(str++) - '0');
		if (result > 2147483647)
			return (-1);
		else if (result < -2147483648)
			return (0);
	}
	return (result * sign);
}
