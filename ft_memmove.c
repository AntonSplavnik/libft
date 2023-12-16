/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 18:55:39 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/15 20:15:21 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*bit_dest;
	unsigned char	*bit_src;
	char			temp [100];
	size_t			i;

	bit_dest = (unsigned char *) dest;
	bit_src = (unsigned char *) src;
	i = 0;
	while (i <= n)
	{
		temp[i] = *bit_src;
		bit_src++;
		i++;
	}
	i = 0;
	while (i <= n)
	{
		*bit_dest = temp[i];
		bit_dest++;
		i++;
	}
	return ((void *) bit_dest);
}

int	main(void)
{
	return (0);
}
