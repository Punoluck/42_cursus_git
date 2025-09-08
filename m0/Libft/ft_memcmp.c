/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:42:50 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 10:42:50 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char *p1;
	char *p2;
	size_t i;

	p1 = (char*)s1;
	p2 = (char*)s2;

	i = 0;
	while (p1[i] && p2[i] && i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
		i++;
	}
	return (0);
}
