/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 16:11:57 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/12 16:11:57 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static void	recur(long n, int fd)
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
	long	pn;

	if (fd == -1)
		return ;
	pn = n;
	if (pn < 0)
	{
		ft_putchar_fd('-', fd);
		pn = -pn;
	}
	recur(pn, fd);
}
