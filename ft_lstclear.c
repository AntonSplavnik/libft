/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:37:44 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/20 20:01:46 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_node;
	t_list	*current;

	if (lst == NULL || del == NULL)
		return ;
	current = *lst;
	while (current)
	{
		next_node = current->next;
		ft_lstdelone(current, del);
		current = next_node;
	}
	*lst = NULL;
}
