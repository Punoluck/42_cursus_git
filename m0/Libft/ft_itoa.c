/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:52:01 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/10 19:10:52 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*recur(int n, char *str)
{
	if (n < 10)
	{
		*str = n;
		str++;
		return (str);
	}
	recur(n / 10, str);
	*str = n % 10;
	str++;
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		pn;
	int		len;

	pn = n;
	len = 0;
	while (pn != 0)
	{
		pn /= 10;
		len++;
	}
	str = (char *)ft_calloc((size_t)sizeof(char), (size_t)(len + 1));
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	recur(n, str);
	return (str-len);
}
