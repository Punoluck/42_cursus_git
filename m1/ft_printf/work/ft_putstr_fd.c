/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/29 10:25:40 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/29 10:25:40 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_fd(char *s, int fd)
{
	int	i;

	if (fd == -1)
		return (0);
	if (!s)
		return (ft_putstr_fd("(null)", fd));
	i = 0;
	while (s[i])
		ft_putchar_fd(s[i++], fd);
	return (i);
}
