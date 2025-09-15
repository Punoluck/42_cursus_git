/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/26 11:01:38 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/13 16:28:19 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	u_c;

	if (!str)
		return (NULL);
	i = 0;
	p = (unsigned char *)str;
	u_c = (unsigned char)c;
	while (i < n)
	{
		p[i] = u_c;
		i++;
	}
	return (p);
}
