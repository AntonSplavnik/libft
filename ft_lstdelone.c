/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:33:32 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/20 19:37:12 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	delete_int_content(void *content)
{
// Assuming the content is dynamically allocated (e.g., an int)
	free (content);
}

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
 // Check if the provided node pointer is NULL or if the deletion function is not provided
	if (lst == NULL || del == NULL)
		return ;
// Call the provided deletion function to free the memory of the node's content
	del (lst->content);
	// Free the memory of the node itself
	free (lst);
}
