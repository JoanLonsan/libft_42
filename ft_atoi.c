/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 21:43:06 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/21 09:30:34 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int negative;
	int	result;

	if (!str)
		return (NULL);
	i = 0;
	while ((str[i] > 8 && str[i] < 14) || str[i] == 32)
		i++;
	if (str[i++] == 45)
		negative = -1;
	if (negative == -1 || str[i] == 43)
		i++;
	while (str[i] >= 48 && str[i] <= 57)
		result = (result * 10) + (str[i++] - '0');
	return (result * negative);	
}
