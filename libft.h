/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:11:48 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/13 19:42:08 by asplavni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <stdint.h>
# include <unistd.h>

//Functions to check and manipulate characters:
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

//Functions to manipulate strings:
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c); //Francinette test 6 faild.
char	*ft_strrchr(const char *s, int c);
size_t	ft_strncmp(const char *s1, const char *s2, size_t n);
// ft_strnstr
// ft_substr
// ft_strjoin
// ft_strtrim
// ft_split
// ft_strmapi
// ft_striteri

//Functions to manipulate memory:
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
// ft_calloc
// ft_memset
// ft_bzero
// ft_memcpy
// ft_memmove
// ft_memchr
// ft_memcmp
// ft_strdup

//Functions for numbers:
int		ft_atoi(const char *str);
// ft_itoa

//Functions to write to a file descriptor
// ft_putchar_fd
// ft_putstr_fd
// ft_putendl_fd
// ft_putnbr_fd

//Bonus Functions
//The bonus functions of libft deal with list manipulation.
// ft_lstnew
// ft_lstadd_front
// ft_lstsize
// ft_lstlast
// ft_lstadd_back
// ft_lstdelone
// ft_lstclear
// ft_lstiter
// ft_lstmap

#endif
