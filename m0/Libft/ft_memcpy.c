/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:10:21 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 13:07:33 by stitrago         ###   ########.fr       */
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
