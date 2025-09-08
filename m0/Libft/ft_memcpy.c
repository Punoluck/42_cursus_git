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
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t i;
	const char *psrc;
	unsigned char *pdest;

	if (n > sizeof(dest))
		return (0);

	psrc = (const char *)src;
	pdest = ( char *)dest;
	i = 0;
	while (i < n)
	{
		printf("hi");
		pdest[i] = psrc[i];
		i++;
	}
	pdest[i] = '\0';
	return (0);
}
