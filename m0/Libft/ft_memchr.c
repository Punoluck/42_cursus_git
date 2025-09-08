/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:40:30 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 10:40:30 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, size_t c, size_t n)
{
	unsigned char *temp;
	size_t i;

	temp = (unsigned char *)str;

	i = 0;
	while (temp[i] && i < n)
	{
		if (temp[i] == (char)c)
		{
			return (temp + i);
		}
		i++;
	}
	return (0);
}
