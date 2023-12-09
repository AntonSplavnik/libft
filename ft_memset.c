/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 16:15:44 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/08 17:59:57 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	int				i;
	unsigned char	*new;

	new = (unsigned char *)s;
	i = 0;
	while (i < (int)n)
	{
		new[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
