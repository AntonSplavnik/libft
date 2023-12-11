/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:15:44 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/10 16:24:09 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*new;

	i = 0;
	new = (unsigned char *)s;
	while (i < (int)n)
	{
		new[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
