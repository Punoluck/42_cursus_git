#ifndef FT_STRRCHAR_H
#define FT_STRRCHAR_H

char *ft_strrchr(const char *str, int c)
{
    char* result;
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
            result = ((char *)str + i);
        }
        i++;
    }
    return result;
}

#endif