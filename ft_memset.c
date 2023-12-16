/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:15:44 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/15 14:56:51 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*start_ptr;

	i = 0;
	start_ptr = (unsigned char *)s;
	while (i < n)
	{
		start_ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
