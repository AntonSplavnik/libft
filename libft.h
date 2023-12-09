/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:11:48 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/09 20:31:46 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

size_t	ft_strlen(const char *str);
/*
ft_strlcpy
ft_strlcat
ft_strchr
ft_strrchr
ft_strncmp
ft_strnstr
ft_substr
ft_strjoin
ft_strtrim
ft_split
ft_strmapi
ft_striteri
 */

void	*ft_memset(void *str, int c, size_t n);

int		ft_atoi(const char *str);

#endif
