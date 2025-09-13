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

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*temp;
	unsigned char	u_c;

	if (!str)
		return (NULL);
	u_c = (unsigned char)c;
	temp = (unsigned char *)str;
	i = 0;
	while (i < n)
	{
		if (temp[i] == u_c)
			return ((void *)&temp[i]);
		i++;
	}
	return (NULL);
}
