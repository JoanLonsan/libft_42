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

static void	ft_split_free(char **s)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		free(s[i]);
		i--;
	}
	free(s);
}

static int	ft_splitaux(char const *str, char c)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			j++;
			i++;
		}
	}
	return (j);
}

static char	*ft_splitted(char *s2, char const *s, size_t i, size_t len)
{
	size_t	j;
	size_t	aux;

	j = 0;
	aux = i - len;
	while (len > 0)
	{
		s2[j] = s[aux];
		j++;
		len--;
	}
	s2[j] = 0;
	return (s2);
}

static char	**ft_real_split(char const *s, char c, char **s2, size_t splitaux)
{
	size_t	i;
	size_t	j;
	size_t	jlen;

	i = 0;
	j = 0;
	jlen = 0;
	while (j < splitaux)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			jlen++;
		}
		s2[j] = (char *)malloc(sizeof(char) * (jlen + 1));
		if (!s2)
			return (NULL);
		ft_splitted(s2[j], s, i, jlen);
		jlen = 0;
		j++;
	}
	s2[j] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char	**s2;
	size_t	i;

	if (!s)
		return (0);
	i = ft_splitaux(s, c);
	s2 = (char **)malloc(sizeof(char *) * (i + 1));
	s2 = ft_real_split(s, c, s2, i);
	while (s2)
	{
		while (s2)
			if (!s2[i])
				ft_split_free(s2);
			i--;
		return (NULL);
	}
	return (s2);
}
