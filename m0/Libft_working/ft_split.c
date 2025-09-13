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

int	passing_sep(const char *s, char c, size_t i)
{
	while (s[i] && s[i] == c)
		i++;
	return (i);
}

static char	**init_result(char const *s, char c)
{
	int		i;
	int		count;

	if (s == NULL)
		return ((char **)ft_calloc(sizeof(char *), (0 + 1)));
	if (c == 0)
		return ((char **)ft_calloc(sizeof(char *), (1 + 1)));
	i = -1;
	count = 0;
	while (s[++i])
	{
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return ((char **)ft_calloc(sizeof(char *), (count + 1)));
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		count;
	int		start;
	char	**result;

	result = init_result(s, c);
	if (result == NULL)
		return (NULL);
	count = 0;
	if (c == 0)
		result[count++] = ft_substr(s, 0, ft_strlen(s));
	i = passing_sep(s, c, 0);
	start = i;
	while (s[i] && c != 0)
	{
		if (s[i] && s[i] == c)
		{
			result[count++] = ft_substr(s, start, i - start);
			while (s[i] && s[i] == c)
				start = ++i;
		}
		else
			i++;
	}
	result[count] = NULL;
	return (result);
}
