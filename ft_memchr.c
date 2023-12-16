/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 16:57:33 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/15 20:21:10 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	looking_for;
	size_t			i;

	str = (unsigned char *)s;
	looking_for = (unsigned char )c;
	i = 0;
	while (i < n)
	{
		if (*str == looking_for)
			return ((void *)str);
		str++;
		i++;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	const char	str[] = "https://www.42.com";
	const char	ch = '.';
	char		*ret;

	ret = ft_memchr(str, ch, strlen(str));

	printf("String after |%c| is - |%s|\n", ch, ret);

	return (0);
} */