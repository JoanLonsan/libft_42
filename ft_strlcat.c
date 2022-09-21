/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 14:30:19 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/21 14:38:04 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;
	size_t	srclen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	j = dstlen;
	i = 0;
	if (dstlen < (size - 1) && size > 0)
	{
		while ((src[i] && dstlen + 1) < size - 1)
			dst[j++] = src[i++];
		dst[j] = '\0';
	}
	if (dstlen >= size)
		dstlen = size;
	return (dstlen + srclen)
}
