/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 10:07:18 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 10:07:18 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void *str;

	str = malloc(n * size);

	if (str == NULL)
	{
		return (NULL);
	}

	ft_bzero(str, (n * size));
	return (str);
}
