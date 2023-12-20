/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 18:46:25 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/20 19:32:57 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

// Check if the provided list pointer is NULL
	if (lst == NULL)
		return ;
	// If the list is empty, set the new node as the first node
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
// Traverse the list to find the last node
	current = *lst;
	while (current->next != NULL)
		current = current->next;
// Add the new node at the end of the list
	current->next = new;
}
