#include "ft_printf.h"

static void	recur(int n, int fd)
{
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return ;
	}
	recur(n / 10, fd);
	ft_putchar_fd((n % 10) + '0', fd);
	return ;
}

void	ft_putnbr_fd(int n, int fd)
{
	if (fd == -1)
		return;
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	recur(n, fd);
}
