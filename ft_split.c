

#include "libft.h"

static int	count_words(char const *s, char c)
{
    int	count;
    int	i;

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
    return (count);
}

char **ft_split(char const *s, char c)
{
    int	i;
    int	count;
    int	start;
    char	**result;

    count = count_words(s, c);        
    result = (char **)ft_calloc(sizeof(char *), (count + 1)); 
    if (result == NULL)
        return (NULL);

    i = 0;
    while (s[i] && s[i] == c)
        i++;
    start = i;
    count = 0;
    while (s[i])
    {
        i++;
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