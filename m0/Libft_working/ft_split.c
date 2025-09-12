/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stitrago <stitrago@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 18:32:34 by stitrago          #+#    #+#             */
/*   Updated: 2025/09/11 18:32:34 by stitrago         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**init_result(char const *s, char c)
{
	int		count;
	int		i;

	count = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return ((char **)ft_calloc(sizeof(char *), (count + 1)));
}

int	passing_sep(const char *s, char c, int i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		start;
	char	**result;

	result = init_result(s, c);
	i = passing_sep(s, c, 0);
	start = i;
	count = 0;
	while (s[i++])
	{
		if ((s[i] == c || !s[i]) && c)
			result[count++] = ft_substr(s, start, i - start);
		while (s[i] && s[i] == c)
			start = ++i;
		if (!s[i])
		{
			if (!c)
				result[count++] = ft_substr(s, start, i - start);
			break ;
		}
	}
	result[count] = NULL;
	return (result);
}
