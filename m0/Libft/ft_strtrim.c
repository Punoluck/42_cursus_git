/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 21:10:32 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/10 00:00:14 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	j;
	size_t	cf0;
	size_t	cf1;
	char	*ps0;
	char	*ps1;

	j = 0;
	cf0 = 0;
    cf1 = 0;
	ps0 = (char *)s1;
	while (*ps0)
	{
		ps1 = strchr(ps0, set[j]);
		cf0 = ps1 - ps0;
		if (cf0 == 0)
			break ;
		cf1 += cf0;
	}
    printf("%zu", cf1);
	return (ps1);
}
