#ifndef FT_STRDUP_H
#define FT_STRDUP_H

#include <stdlib.h>

char *ft_strdup(const char *src)
{
    void *duplicate;
    unsigned int i;

    duplicate = malloc(sizeof(src));

    if (duplicate == NULL)
    {
        return NULL;
    }

    i = 0;
    while (src[i])
    {
        ft_memset(duplicate, src[i], sizeof(src));
    }
}

#endif