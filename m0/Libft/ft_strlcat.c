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
	size_t	i;
	size_t	j;

	i = 0;
	while (dst[i] && i < n)
		i++;

	if (i == n)
		return (i + ft_strlen(src));
	j = 0;
	while (src[j])
	{
		if (j < n - i - 1)
			dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + j);
}
