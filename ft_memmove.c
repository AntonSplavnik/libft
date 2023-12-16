/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:55:39 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/16 17:49:05 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bit_src;
	unsigned char	*bit_dest;

	bit_src = (unsigned char *)src;
	bit_dest = (unsigned char *)dest;
	if (dest == src)
		return (dest);
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	while (n--)
		bit_dest[n] = bit_src[n];
	return (dest);
}

/*
int	main(void)
{
	return (0);
}
 */