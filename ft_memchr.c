/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 10:30:07 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/21 11:00:00 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (!s)
		return (NULL);
	size_t	i;

	i = 0;
	while (i < n)
	{
		if ((unsigned char*)(s + i) == (unsigned char) c)
			return ((unsigned char*)(s + i));
		i++;
	}
}
