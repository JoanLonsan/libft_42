/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:00:41 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/27 15:00:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	size_t	i;

	s2 = (char *)malloc(sizeof (*s) * (ft_strlen(*s) + 1));
	if (!s2 || !f)
		return (NULL);
	i = 0;
	while (s2[i] < (ft_strlen(s) - 1))
		s2[i] = f(i, s[i++]);
	s2[i] = '\0';
	return (s2);
}
