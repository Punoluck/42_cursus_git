/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:58:01 by stitrago          #+#    #+#             */
/*   Updated: 2025/08/28 10:59:43 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.h"

#ifndef FT_STRLCPY_H
# define FT_STRLCPY_H

int	strlcpy(char *dst, char *src, int size)
{
	int	len;
	int	i;

	len = ft_strlen(src);
	if (size == 0)
	{
		return (len);
	}
	while (src[i] && i < size - 1)
	{
		dst[i] = src[i];
		dst++;
		i++;
	}
	dst[i] = '\0';
	return (len);
}

#endif