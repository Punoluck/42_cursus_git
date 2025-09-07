/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:01:38 by stitrago          #+#    #+#             */
/*   Updated: 2025/08/28 11:04:37 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_MEMSET_H
# define FT_MEMSET_H

#include <unistd.h>

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)str;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (p);
}

#endif