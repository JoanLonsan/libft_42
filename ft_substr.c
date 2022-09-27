/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/22 20:27:21 by marvin            #+#    #+#             */
/*   Updated: 2022/09/22 20:27:21 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*ss;

	ss = (char *)malloc(sizeof(*s) * (len + 1));
	if (!ss)
		return (NULL);
	while (s[start])
	{
		if (i < len)
			ss[i++] = s[start++];
	}
	ss[i] = '\0';
	return (ss);
}
