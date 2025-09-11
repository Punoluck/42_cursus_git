/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:52:01 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/11 19:18:43 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*recur(int i, int n, char *str)
{
	if (n < 10)
	{
		*str++ = n + '0';
		return (str);
	}
	str = recur(i, n / 10, str);
	*str = (n % 10) + '0';
	return (++str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		pn;
	int		len;
	int		sign;

	sign = 0;
	if (n < 0)
	{
		n *= -1;
		sign = 1;
	}
	len = 0;
	pn = n;
	while (pn != 0)
	{
		pn /= 10;
		len++;
	}
	str = (char *)ft_calloc((size_t)sizeof(char), (size_t)(len + sign + 1));
	if (str == NULL)
		return (NULL);
	if (sign == 1)
		*str++ = '-';
	str[len] = '\0';
	str = recur(0, n, str);
	return (str - len - sign);
}
