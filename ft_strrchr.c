/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 18:45:20 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/14 18:55:16 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*first_char;

	first_char = (char *)s;
	while (*s)
		s++;
	while (first_char <= s)
	{
		if (*s == (unsigned char) c)
			return ((char *) s);
		s--;
	}
	if (c == 0)
		return (NULL);
	return (NULL);
}
/*
#include <stdio.h>

int	main(void)
{
	const char	*s = "hello";
	int			c;
	char		*resault;

	c = 104;
	resault = ft_strrchr(s, c);
	printf("Resault: %s", resault);
	return (0);
} */