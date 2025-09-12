/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:52:01 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/12 15:15:31 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*recur(long n, char *str)
{
	if (n < 10)
	{
		*str++ = n + '0';
		return (str);
	}
	str = recur(n / 10, str);
	*str = (n % 10) + '0';
	return (++str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	pn;
	int		len;
	int		sign;

	len = 0;
	pn = n;
	if (pn == 0)
		len = 1;
	sign = 0;
	if (pn < 0 && sign++ >= 0)
		pn = -pn;
	while ((pn != 0) && len++ >= 0)
		pn /= 10;
	str = (char *)ft_calloc(sizeof(char), len + sign + 1);
	if (str == NULL)
		return (NULL);
	if (sign == 1)
		*str++ = '-';
	str[len] = '\0';
	pn = n;
	if (pn < 0)
		pn = -pn;
	str = recur(pn, str);
	return (str - len - sign);
}
