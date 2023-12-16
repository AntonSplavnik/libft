/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 20:45:04 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/15 15:26:43 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		*ptr = 0;
		ptr++;
		i++;
	}
}
/*
int	main(void)
{
	char	test[] = "hello";
	size_t	leangth = sizeof(test);

	printf("Result: %s", test);
	ft_bzero(test, 3);
	printf("\nResult: ");
	for (size_t i = 0; i < leangth; i++)
		printf("%c", test[i]);
	return (0);
} */
