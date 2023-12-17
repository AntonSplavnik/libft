/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/17 19:43:06 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/17 22:01:20 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	int		i;
	int		len;

	len = ft_strlen((char *)s);
	new = (char *)malloc(sizeof(char) * (len +1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		new[i] = s[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    printf("%s\n", ft_strdup("hello"));
    printf("%s\n", strdup("hello"));
}*/