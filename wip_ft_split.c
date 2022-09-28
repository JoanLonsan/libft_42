/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/24 20:26:49 by marvin            #+#    #+#             */
/*   Updated: 2022/09/24 20:26:49 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	ft_splitaux(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char t;

	i = 0;
	while (s[i] != c || s[i])
		i++;
	t = (char *)malloc(sizeof(char) * i);
	j = 0;
	while (s[j] != c || s[j])
	{
		t[j] = s[j];
		j++;
	}
	t[j] = '\0';
	return (t);
}

static void	ft_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])

}

char    **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	*str;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] != c)
			i++;
		j++;
	}
	str = (char *)malloc(sizeof (char *s) * (j + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (s[j] != c)
			str[i++] = ft_splitaux(s[j], c);
	}
	ft_free(str**);
	return (str**);
}
