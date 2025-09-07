#ifndef FT_MEMCHR_H
#define FT_MEMCHR_H

void *ft_memchr(const void *str, int c, int n)
{
    unsigned char *temp;
    unsigned int i;

    temp = (unsigned char *)str;

    i = 0;
    while (temp[i] && i < n)
    {
        if (temp[i] == (unsigned char)c)
        {
            return temp+i;
        }
        i++;
    }
}

#endif