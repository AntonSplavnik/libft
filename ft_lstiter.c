/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 19:46:58 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/20 19:49:41 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
// Iterate through the list
	while (lst != NULL)
	{
// Apply the function to the content of the current node
		f(lst->content);
// Move to the next node
		lst = lst->next;
	}
}