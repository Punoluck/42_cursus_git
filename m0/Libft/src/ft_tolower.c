#ifndef FT_TOLOWER_H
#define FT_TOLOWER_H

int ft_tolower(int c)
{
    if ('A' <= c && c <= 'Z')
    {
        c+=32;
    }

    return c;
}

#endif