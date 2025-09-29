/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:13:23 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/29 10:13:23 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	recur(int n, int fd, int len)
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

int	ft_putnbr_fd(int n, int fd)
{
	unsigned int	len;

	len = 0;
	if (fd == -1)
		return (0);
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (11);
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
		len++;
	}
	len += recur(n, fd, 0);
	return (len);
}
