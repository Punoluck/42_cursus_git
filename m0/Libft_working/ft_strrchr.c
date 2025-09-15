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
	size_t		len;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	len++;
	while (len--)
		if (str[len] == (char)c)
			return ((char *)str + len);
	return (0);
}
