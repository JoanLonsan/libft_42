/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 10:00:41 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/27 10:19:30 by jcrescen         ###   ########.fr       */
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
	while (s2[i] < ft_strlen(*s))
		s2[i] = f(i, s[i++]);
	s2[i] = '\0';
	return (s2);
}
