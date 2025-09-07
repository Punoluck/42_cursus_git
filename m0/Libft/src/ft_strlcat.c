#ifndef FT_STRLCAT_H
#define FT_STRLCAT_H


#include "ft_strlen.c"

int ft_strlcat(char *dst, const char * src, unsigned int dsize)
{
    int dstlen;
    int i;

    dstlen = ft_strlen(dst);
    dst += dstlen;

    i = 0;
    dsize -= dstlen;
    while (src[i] && i < dsize - 1)
    {
        dst[i] = src[i];
        i++;
    }

    dst[i] = '\0';

    return (dstlen + i);

}

#endif