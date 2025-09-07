#ifndef FT_STRLEN_H
#define FT_STRLEN_H

int ft_strlen(char *str)
{
    int len;

    len = 0;
    while (str[len])
    {
        len++;
    }

    return (len);
}

#endif