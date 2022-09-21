/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/21 15:03:12 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/21 15:14:52 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle)
		return ((char*)haystack);
	i = 0;
	while (haystack[i + j] && i < len)
	{
		j = 0;
		while (needle[j] && ((i + j) < len))
		{
			if (haystack[i + j] == needle[j])
				j++;
		}
		if (!needle[j])
			return ((char*)(haystack + i));
		i++;
	}
	return (NULL);
}