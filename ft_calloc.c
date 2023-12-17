/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:43:52 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/17 20:41:17 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	if (nmemb > 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*
void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			total_size;
	void			*memory;

	total_size = nmemb * size;
	memory = malloc(total_size);
	if (nmemb > 0 && SIZE_MAX / nmemb < size)
		return (NULL);
	if (memory == NULL)
		return (NULL);
	ft_bzero(memory, nmemb * size);
	return (memory);
}
 */