/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asplavni <asplavni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 17:11:48 by asplavni          #+#    #+#             */
/*   Updated: 2023/12/14 20:49:38 by asplavni         ###   ########.fr       */
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
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
//char	*ft_substr(char const *s, unsigned int start, size_t len);
//char	*ft_strjoin(char const *s1, char const *s2);
// char	*ft_strtrim(char const *s1, char const *set);
//char	**ft_split(char const *s, char c);
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//void	ft_striteri(char *s, void (*f)(unsigned int, char*));

//Functions to manipulate memory:
void	*ft_memset(void *str, int c, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
// ft_calloc
// ft_memset
void	ft_bzero(void *s, size_t n);
// ft_memcpy
// ft_memmove
// ft_memchr
// ft_memcmp
// ft_strdup

//Functions for numbers:
int		ft_atoi(const char *str);
//char	*ft_itoa(int n);

//Functions to write to a file descriptor
//void	ft_putchar_fd(char c, int fd);
//void	ft_putstr_fd(char *s, int fd);
//void	ft_putendl_fd(char *s, int fd);
//void	ft_putnbr_fd(int n, int fd);

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
