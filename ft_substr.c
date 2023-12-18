/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 19:19:05 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/18 17:48:13 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_str;
	size_t	sub_len;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	sub_len = ft_strlen(s + start);
	if (len > sub_len)
		len = sub_len;
	sub_str = (char *)malloc(sizeof(char) * len + 1);
	if (sub_str == 0)
		return (0);
	ft_memcpy(sub_str, s + start, len);
	sub_str[len] = '\0';
	return (sub_str);
}
/*
#include <stdio.h>
int main()
{
	printf("%s\n",ft_substr("Red Hot Chili Peppers", 4, 12));
}*/