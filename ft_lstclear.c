/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wip_ft_lstclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:13:02 by marvin            #+#    #+#             */
/*   Updated: 2022/09/29 00:13:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	size_t	i;
	size_t	j;
	t_list	*next;
	t_list	*aux;

	aux = *lst;
	i = ft_lstsize(*lst);
	j = 0;
	while (lst)
	{
		while (j++ < i)
		{
			next = aux->next;
			ft_lstdelone(*lst, del);
			aux = next;
		}
		*lst = NULL;
	}
}
