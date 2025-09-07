#ifndef FT_STRCHAR_H
#define FT_STRCHAR_H

char *ft_strchr(const char *str, int c)
{
    unsigned int i;

    i = 0;
    if (c == 0)
    {
        return 0;
    }
    while (str[i])
    {
        if (str[i] == c)
        {
            return ((char *)str + i);
        }
        i++;
    }
}

#endif