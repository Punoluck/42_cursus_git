/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:28:36 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 11:28:36 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


size_t	ft_strlcpy(char *dst, const char *src,	size_t	n)
{
	size_t	i;
	size_t	len;

	len = ft_strlen((char *)dst);

	if (n == 0)
		return (len);

	i = 0;
	while (src[i] && i < n - 1)
	{
		dst[i] = src[i];
		i++;
	}

	dst[i] = '\0';
	return (len);
}
