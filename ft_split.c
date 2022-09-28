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
		i--
	}
	free(s);
	return (NULL);
}

char    **ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	char	**str;

	j = ft_splitlen(s, c);
	i = 0;
	str = (char *)malloc(sizeof (*s) * (j + 1));
	if (!str)
		return (NULL);
	i = 0;
	j = -1;
	while (str[i])
	{
		while (s[j++] != c)
			str[i++] = ft_splitaux(s[j], c);
	}
	while (str)
	{
		if (!str[i])
			ft_free(**str);
		i--;
	}
	return (**str);
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

static char	*ft_splitted(char *s, char const *s, int i, int len)
{
	int	j;

	j = 0;
	while (len > 0)
	{
		s[j] = s[i - len];
		j++;
		len--;
	}
	s[j] = '\0';
	return (s);
}

static char	**ft_realsplit(char const *s, char c, char **s2, size_t splitaux)
{
	int	i;
	int	j;
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
			return (0);
		ft_splitted(s2[j], s, i, jlen);
		jlen = 0;
		j++;
	}
	s2[j] = '\0';
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
	s2 = ft_realsplit(s, c, s2, i);
	while (s2)
	{
		while (s2)
			if (!s2[i])
				ft_free(**s2);
			i--;
		return (NULL);
	}
	return (s2);
}
