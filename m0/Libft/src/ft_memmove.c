/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/28 18:03:41 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/07 09:16:22 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMMOVE_H
# define FT_MEMMOVE_H

# include <unistd.h>
# include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	const char		*psrc;
	unsigned char	*pdest;
	unsigned char	*temp;

	psrc = (const char *)src;
	pdest = (unsigned char *)dest;
	i = 0;
    
	while (i < n)
	{
		pdest[i] = temp[i];
		i++;
	}
	pdest[i] = '\0';
}

#endif