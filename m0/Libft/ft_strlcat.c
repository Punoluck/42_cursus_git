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

size_t	ft_strlcat(char *dst, const char *src,  size_t dsize)
{
	size_t i;

	i = 0;
	while (dst[i])
		i++;

	while (i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';

	return (i);
}