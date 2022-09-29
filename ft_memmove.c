/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 12:55:11 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/29 12:33:28 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	if (len == 0)
		return (dst);
	while (len != 0)
	{
		*(char *)(dst + (len - 1)) = *(char *)(src + (len - 1));
		len--;
	}
	return (dst);
}
