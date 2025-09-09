/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 16:17:33 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/09 16:17:33 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void	*ft_calloc(size_t n, size_t size)
{
	size_t	buf;
	void	*str;

	if (n == 0 || size == 0)
	{
	}
	else if ((((size_t)-1) / n <= size) || (((size_t)-1) / size <= n))
		return (0);

	buf = n * size;
	str = malloc(buf);

	if (str == NULL)
		return (NULL);

	ft_bzero(str, (buf));
	return (str);
}
