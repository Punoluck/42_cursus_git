#include "ft_printf.h"

static void	lowwer_hex(unsigned long long n, int fd)
{
	if (n < 16)
	{
        if (n > 9)
            ft_putchar_fd((n-10) + 'a', fd);
        else
		    ft_putchar_fd(n + '0', fd);
		return ;
	}
	lowwer_hex(n / 16, fd);
    if ((n % 16) > 9)
        ft_putchar_fd(((n % 16)-10) + 'a', fd);
    else
	    ft_putchar_fd((n % 16) + '0', fd);
	return ;
}

static void	upper_hex(unsigned long long n, int fd)
{
	if (n < 16)
	{
        if (n > 9)
            ft_putchar_fd((n-10) + 'A', fd);
        else
		    ft_putchar_fd(n + '0', fd);
		return ;
	}
	upper_hex(n / 16, fd);
    if ((n % 16) > 9)
        ft_putchar_fd(((n % 16)-10) + 'A', fd);
    else
	    ft_putchar_fd((n % 16) + '0', fd);
	return ;
}

void	ft_puthex_fd(unsigned long long n, int fd, char type)
{
	if (fd == -1)
		return ;
	if (type == 'x')
		lowwer_hex(n, fd);
	else if (type == 'X')
		upper_hex(n, fd);
	else if (type == 'p')
	{
		ft_putstr_fd("0x", fd);
		lowwer_hex(n, fd);
	}
}
