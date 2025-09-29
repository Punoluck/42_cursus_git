#include "ft_printf.h"

static int	recur(unsigned int n, int fd, int len)
{
	if (n < 10)
	{
		ft_putchar_fd(n + '0', fd);
		return (++len);
	}
	len = recur(n / 10, fd, len);
	ft_putchar_fd((n % 10) + '0', fd);
	return (++len);
}

int	ft_putunbr_fd(unsigned int n, int fd)
{
	if (fd == -1)
		return (0);
	return (recur(n, fd, 0));
}
