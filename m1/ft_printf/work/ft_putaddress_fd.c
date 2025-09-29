#include "ft_printf.h"

static int	lowwer_hex(unsigned long long n, int fd, int len)
{
	if (n < 16)
	{
		if (n > 9)
			ft_putchar_fd((n - 10) + 'a', fd);
		else
			ft_putchar_fd(n + '0', fd);
		return (++len);
	}
	len = lowwer_hex(n / 16, fd, len);
	if ((n % 16) > 9)
		ft_putchar_fd(((n % 16) - 10) + 'a', fd);
	else
		ft_putchar_fd((n % 16) + '0', fd);
	return (++len);
}

int ft_putaddress_fd(unsigned long long n, int fd)
{
    if (n == 0)
		return (ft_putstr_fd("(nil)", fd));
	return (ft_putstr_fd("0x", fd) + lowwer_hex(n, fd, 0));
}
