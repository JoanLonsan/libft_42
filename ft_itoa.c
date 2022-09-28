/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_ft_itoa.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 09:33:34 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/28 23:11:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_ilen(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
		i++;
	if (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char *ft_itoa(int n)
{
	size_t	i;
	char	*str;

	i = ft_ilen(n);
	str = (char *)malloc(sizeof(char *) * (i + 1));
	if (!str)
		return (NULL);4
	if (n < 0)
	{
		str[0] = 45;
		n *= -1;
	}
	while (n > 9)
	{
		str[i--] = (n % 10) + 48;
		n /= 10;
	}
	str[i] = n + 48;
	return (str);
}