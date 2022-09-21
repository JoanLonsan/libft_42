/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcrescen <jcrescen@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/20 16:21:21 by jcrescen          #+#    #+#             */
/*   Updated: 2022/09/21 11:03:52 by jcrescen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <unistd.h>
# include <stddef.h>
# include <stdlib.h>
# include <ctype.h>
# include <string.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
calloc
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
itoa
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
memcpy
memmove
memset
putchar_fd
putendl_fd
putnbr_fd
putstr_fd
split
strchr
strrchr
strdup
striteri
strjoin
strlcat
strlcpy
size_t	ft_strlen(const char *s);
strmapi
strncmp
strnstr
strrchr
strtrim
substr
tolower
toupper
lstnew
lstdelone
lstclear
lstadd_front
lstadd_back
lstsize
lstiter
lstmap
lstlast

#endif
