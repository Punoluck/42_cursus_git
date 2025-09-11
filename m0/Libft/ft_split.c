/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 13:15:57 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/10 17:06:35 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] == c)
		i++;
	if (s[i])
	{
		count++;
	}
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
			if (s[i] && s[i] != c)
				count++;
		}
		i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	count;
	char	**s2;

	i = 0;
	count = 0;
	s2 = (char **)ft_calloc(sizeof(char *), counter(s, c) + 1);
	while (s[i])
	{
		if (s[i] != c)
			j = i;
		while (s[i] && s[i] != c)
		{
			i++;
			if (!s[i] || s[i] == c)
				s2[count++] = ft_substr(s, j, i - j);
		}
		i++;
	}
	s2[count] = NULL;
	return (s2);
}
