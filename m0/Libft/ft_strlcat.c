/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:53:00 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 10:53:00 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src,  size_t n)
{
	size_t	j;
	size_t	dst_size;

	dst_size = ft_strlen(dst);

	if (n == 0 || dst_size >= n)
		return (dst_size + ft_strlen((char *)src));

	j = 0;
	while (src[j])
	{
		if (j < n - dst_size - 1)
			dst[dst_size + j] = src[j];
		j++;
	}

	dst[dst_size + j] = '\0';
	return (dst_size + j - 1);
}
