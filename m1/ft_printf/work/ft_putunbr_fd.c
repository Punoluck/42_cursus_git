#include "ft_printf.h"

static void	recur(unsigned int n, int fd)
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

void	ft_putunbr_fd(unsigned int n, int fd)
{
	if (fd == -1)
		return ;
	recur(n, fd);
}
