/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:28:26 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/08 11:28:26 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	void *duplicate;
	size_t i;

	duplicate = malloc(sizeof(src));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (src[i])
	{
		ft_memset(duplicate, src[i], sizeof(src));
	}
	return (0);
}