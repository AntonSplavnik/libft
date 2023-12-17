/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 14:05:18 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/17 19:38:24 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	if (len < little_len || len == 0)
		return (NULL);
	while (*big && i <= len - little_len)
	{
		if (ft_strncmp(big, little, little_len) == 0)
			return ((char *)big);
		big++;
		i++;
	}
	return (NULL);
}
	/* size_t	little_len;
	size_t	i;

	i = 0;
	little_len = ft_strlen(little);
	if (little_len <= 0)
		return ((char *) big);
	if (len < little_len)
		return (NULL);
	while (*big && i <= len - little_len)
	{
		if (*big == *little && ft_strncmp(big, little, little_len) == 0)
			return ((char *) big);
		big++;
		i++;
	}
	return (NULL); */

/*
int	main(void)
{
	const char	*largestring = "Foo Bar Baz";
	const char	*smallstring = "Bar";
	char		*ptr;

	ptr = ft_strnstr(largestring, smallstring, 3);
	printf("Resault: %s", ptr);
	return (0);
}
 */