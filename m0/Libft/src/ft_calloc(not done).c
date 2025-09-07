#ifndef FT_CALLOC_H
#define FT_CALLOC_H

#include <stdlib.h>

void *ft_calloc(unsigned int n, unsigned int size)
{
    void *str;
    unsigned int i;

    str = malloc(n*size);

    if (str == NULL)
    {
        return NULL;
    }

    ft_bzero(str, (n * size));
    return (str);
}

#endif