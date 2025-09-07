#ifndef FT_STRLCPY_H
#define FT_STRLCPY_H

#include <stdio.h>

int ft_strlcpy(char *dst, const char * src, unsigned int dsize)
{
    int i;

    i = 0;
    while (src[i] && i < dsize - 1)
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return (i);

}

#endif