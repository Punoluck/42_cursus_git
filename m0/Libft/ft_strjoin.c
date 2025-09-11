/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:45:08 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/11 17:42:43 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;
	int		i;
	int		j;

	dst = (char *)(ft_calloc(sizeof(char), ft_strlen(s1) + ft_strlen(s2) + 1));
	if (dst == NULL)
		return (NULL);
	i = -1;
	while (s1[++i])
		dst[i] = (char)(s1[i]);
	j = -1;
	while (s2[++j])
		dst[i++] = (char)(s2[j]);
	dst[i] = '\0';
	return (dst);
}
