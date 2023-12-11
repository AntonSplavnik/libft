/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 18:43:27 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/11 22:18:53 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char) c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (NULL);
}

/*
char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	c_c;

	c_c = (unsigned char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == c_c)
			return ((char *)&s[i]);
		i++;
	}
	if (c_c == '\0')
		return ((char *)&s[i]);
	return (NULL);
} */

/*
int	main(void)
{
	//char	first[50] = "test";
	char	*result = ft_strchr("teste", '\0');

	if (result != NULL)
	{
		printf("%s\n", result);
		printf("%p\n", result);
	}
	else
		printf("Character 'c' not found in the string.\n");
	return (0);
}
 */