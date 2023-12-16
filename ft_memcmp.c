/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/16 18:04:10 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/16 19:24:19 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (*str1 != *str2)
			return ((int *)str1 - (int *)str2);
		i++;
		str1++;
		str2++;
	}
	return (0);
}

/* int	main(void)
{
	char str1[] = "Hello World";
	char str2[] = "Hello World";

	int resault = ft_memcmp(str1, str2, 3);
	printf("Resault %d", resault);
} */