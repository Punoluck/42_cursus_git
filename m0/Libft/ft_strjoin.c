/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 20:45:08 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/09 21:09:20 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dst;

	dst = ft_strdup(s1);
	ft_strlcat(dst, s2, ft_strlen(s1) + ft_strlen(s2) + 2);
	return (ft_strdup(dst));
}
