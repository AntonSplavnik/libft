/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 19:29:18 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/14 14:07:47 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
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
	if (i == n || (!*s1 && !*s2))
		return (0);
	return ((unsigned char)(*s1) - (unsigned char)(*s2));
}

/*
#include <stdio.h>

int	main(void)
{
	const char	*s1 = "1234";
	const char	*s2 = "1235";
	size_t	bytes = 4;
	int	result = ft_strncmp(s1, s2, bytes);

	printf("Resault: %d", result);
	return (0);
}
 */