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

static char	**init_result(char const *s, char c, int *count)
{
	int		i;

	if (s == NULL)
		return ((char **)ft_calloc(sizeof(char *), (0 + 1)));
	if (c == 0)
		return ((char **)ft_calloc(sizeof(char *), (1 + 1)));
	i = 0;
	*count = 0;
	if (s && s[0] && s[0] != c)
		(*count)++;
	while (s && s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
			if (s[i] && s[i] != c)
				(*count)++;
		}
		if (s[i] && s[i] != c)
			i++;
	}
	return ((char **)ft_calloc(sizeof(char *), (*count + 1)));
}
char	**insert_substr(char **result, char const *s, char c, int *cur_count)
{
	int		i;
	int		start;

	i = 0;
	while (s && s[i] && c)
	{
		start = i;
		while(s[i] && s[i] != c)
		{
			i++;
			if (s[i] == c || s[i] == '\0')
			{
				result[*cur_count]	= ft_substr(s, start, i - start);
				if (result[*cur_count] == NULL)
					return (NULL);
				(*cur_count)++;
				break ;
			}
		}
		if (!s[i])
			break ;
		i++;
	}
	return (result);
}

int	free_result(char **result, int count, int check)
{
	if (check == 0)
		return (0);
	int	i;

	i = 0;
	while (i < count)
	{
		free(result[i]);
		i++;
	}
	free(result);
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		count;
	int		cur_count;

	count = 0;
	result = init_result(s, c, &count);
	if (free_result(result, count, (result == NULL)) == 1)
		return (NULL);
	cur_count = 0;
	if (s && s[0] && c)
	{
		result = insert_substr(result, s, c, &cur_count);
		if (free_result(result, count, (result == NULL)) == 1)
			return (NULL);
	}
	else if (s && s[0] && c == 0)
	{
		result[0] = ft_strdup(s);
		if (free_result(result, count, (result[0] == NULL)) == 1)
			return (NULL);
		count++;
	}
	result[count] = NULL;
	return (result);
}
