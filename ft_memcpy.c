/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 14:36:33 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/14 20:56:40 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char	*char_dest;
	char	*char_src;
	size_t	i;

	char_dest = (char *)dest;
	char_src = (char *)src;
	i = 0;
	if (char_dest == 0 && char_src == 0)
		return (NULL);
	while (i < n)
	{
		char_dest[i] = char_src[i];
		i ++;
	}
	return (dest);
}
