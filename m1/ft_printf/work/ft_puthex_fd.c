/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:13:29 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/29 10:13:29 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	lowwer_hex(unsigned int n, int fd, int len)
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

static int	upper_hex(unsigned int n, int fd, int len)
{
	if (n < 16)
	{
		if (n > 9)
			ft_putchar_fd((n - 10) + 'A', fd);
		else
			ft_putchar_fd(n + '0', fd);
		return (++len);
	}
	len = upper_hex(n / 16, fd, len);
	if ((n % 16) > 9)
		ft_putchar_fd(((n % 16) - 10) + 'A', fd);
	else
		ft_putchar_fd((n % 16) + '0', fd);
	return (++len);
}

int	ft_puthex_fd(unsigned int n, int fd, char type)
{
	if (fd == -1)
		return (0);
	if (type == 'x')
		return (lowwer_hex(n, fd, 0));
	else if (type == 'X')
		return (upper_hex(n, fd, 0));
	return (0);
}
