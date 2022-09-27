/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 19:40:43 by marvin            #+#    #+#             */
/*   Updated: 2022/09/24 19:40:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isset(char c, char const *set)
{
	return (c == set);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	char	*sc;
	size_t	first;
	size_t	last;

	i = 0;
	if (!ft_isset(s1[i++]))
	first = i;
	i = ft_strlen(s1);
	if (!ft_isset(s1[i--]))
	last = i;
	sc = (char *)malloc(sizeof(char) * (ft_strlen(s1)));
	if (!sc)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		if (s1[i] == first || s1[i] == last)
			i++;
		else
			sc = s1[i++];
	}
	sc[i] = '\0';
	return (sc);
}
