/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:18 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/13 20:15:51 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && *s1 && *s1 == *s2)
	{
		i++;
		s1++;
		s2++;
	}
	if (i == n - 1 || (!*s1 && !*s2))
		return (0);
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}
