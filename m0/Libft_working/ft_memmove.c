/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:03:41 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/13 15:56:12 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*psrc;
	char	*pdest;

	if (!dest && !src)
		return (NULL);
	psrc = (char *)src;
	pdest = (char *)dest;
	if (dest <= src)
		return (ft_memcpy(dest, src, n));
	else
	{
		while (n--)
			pdest[n] = psrc[n];
	}
	return (dest);
}
