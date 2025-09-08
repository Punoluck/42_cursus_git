/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:03:41 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 12:12:35 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i;
	const char *psrc;
	unsigned char *pdest;

	psrc = (const char *)src;
	pdest = (unsigned char *)dest;

	pdest[n] = '\0';
	i = n-1;
	while (i > 0)
	{
		pdest[n] = psrc[n];
		i--;
	}
	pdest[0] = psrc[0];

	return (0);
}
