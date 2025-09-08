/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 13:43:30 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/07 13:43:30 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t n)
{
	size_t i;
	size_t j;

	if (*little == '\0')
		return ((char *)big);

	i = 0;
	while (big[i] && i < n)
	{
		j = 0;
		while (big[i] == little[j])
		{
			i++;
			j++;

			if (!little[j])
				return ((char *)big + i - j);

			if (big[i] != little[j])
				break ;
		}
		i++;
	}
	return (0);
}
