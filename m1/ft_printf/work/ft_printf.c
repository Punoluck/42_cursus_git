/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+
	+:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+
	+#+           */
/*   Created: 2025/09/29 10:20:30 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/29 10:20:30 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"


static int	arg_found(va_list ap, char type)
{
	if (type == 'c')
		return (ft_putchar_fd((char)va_arg(ap, int), 1));
	else if (type == 's')
		return (ft_putstr_fd(va_arg(ap, char *), 1));
	else if (type == 'd' || type == 'i')
		return (ft_putnbr_fd(va_arg(ap, int), 1));
	else if (type == 'u')
		return (ft_putunbr_fd(va_arg(ap, int), 1));
	else if (type == 'X' || type == 'x')
		return (ft_puthex_fd(va_arg(ap, unsigned int), 1, type));
    else if (type == 'p')
		return (ft_putaddress_fd(va_arg(ap, unsigned long long), 1));
	else if (type == '%')
		return (ft_putchar_fd('%', 1));
	return (0);
}

int	ft_printf(const char *fmt, ...)
{
	va_list ap;
	int     len;

    len = 0;
	if (!fmt)
		return (ft_putstr_fd("null", 1));
	va_start(ap, fmt);
	while (*fmt)
	{
		if (*fmt == '%')
			len += arg_found(ap, *++fmt);
		else if (*fmt)
			len += ft_putchar_fd(*fmt, 1);
		fmt++;
	}
	va_end(ap);
	return (len);
}
