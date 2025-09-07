/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 17:10:21 by stitrago          #+#    #+#             */
/*   Updated: 2025/08/28 18:02:05 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMCPY_H
# define FT_MEMCPY_H

# include <unistd.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	const char		*psrc;
	unsigned char	*pdest;

	psrc = (const char *)src;
	pdest = (unsigned char *)dest;
	i = 0;
	while (i < n)
	{
		pdest[i] = psrc[i];
		i++;
	}
	pdest[i] = '\0';
}
#endif
