/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 10:32:46 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/07 10:32:46 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char *result;
	int i;

	i = 0;
	if (c == 0)
	{
		return (0);
	}
	while (str[i])
	{
		if (str[i] == c)
		{
			result = ((char *)str + i);
		}
		i++;
	}
	return (result);
}
