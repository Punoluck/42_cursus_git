/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:10:21 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/09 16:26:57 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	unsigned char *psrc;
	unsigned char *pdest;

	if (!dest && !src)
		return (0);

	if (dest == src)
		return ((unsigned char *)dest);

	psrc = (unsigned char *)src;
	pdest = (unsigned char *)dest;

	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}

	return (pdest);
}
