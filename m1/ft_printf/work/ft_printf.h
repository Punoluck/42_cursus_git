#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);
void	ft_putunbr_fd(unsigned int n, int fd);
void	ft_puthex_fd(unsigned long long n, int fd, char type);

void    ft_putaddress_fd(unsigned long long s, int fd);

int     ft_printf(const char *fmt, ...);

#endif