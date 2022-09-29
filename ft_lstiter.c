/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_ft_lstiter.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:13:27 by marvin            #+#    #+#             */
/*   Updated: 2022/09/29 00:13:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	size_t	i;
	size_t	j;
	t_list	*next;
	t_list	*aux;

	aux = lst;
	i = ft_lstsize(lst);
	j = 0;
	while (lst)
	{
		while (j++ < i)
		{
			next = aux->next;
			f(lst->content);
			aux = next;
		}
	}
}
