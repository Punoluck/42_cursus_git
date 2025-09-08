/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 13:48:43 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 11:29:27 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <unistd.h>

// Characters
size_t	ft_isalnum(size_t c);
size_t	ft_isalpha(size_t c);
size_t	ft_isascii(size_t c);
size_t	ft_isdigit(size_t c);
size_t	ft_isprint(size_t c);
size_t	ft_tolower(size_t c);
size_t	ft_toupper(size_t c);

// Memory
void	ft_bzero(void *s, size_t n);
void	*ft_memchr(const void *str, size_t c, size_t n);
size_t	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memset(void *str, int c, size_t n);

// string.h
char	*ft_strchr(const char *str, size_t c);
size_t	ft_strlcat(char *dst, const char *src, size_t dsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dsize);
size_t	ft_strlen(const char *str);
size_t	ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *big, const char *little, size_t n);
char	*ft_strrchr(const char *str, int c);

// string.h
size_t	ft_atoi(const char *str);
char	*ft_strdup(const char *src);
void	*ft_calloc(size_t n, size_t size);

#endif