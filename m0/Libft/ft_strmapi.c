#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    unsigned int	i;
    char			*new_str;

    if (!s || !f)
        return (NULL);
    
    new_str = (char *)ft_calloc(sizeof(char), (ft_strlen(s) + 1));
    if (!new_str)
        return (NULL);
    i = 0;
    while (s[i])
    {
        new_str[i] = f(i, s[i]);
        i++;
    }
    return (new_str);
    
}