#ifndef FT_MEMCMP_H
#define FT_MEMCMP_H

int ft_memcmp(const void *s1, const void *s2, unsigned int n)
{
    unsigned char *p1;
    unsigned char *p2;
    unsigned int i;

    p1 = (unsigned char *)s1;
    p2 = (unsigned char *)s2;

    i = 0;
    while (p1[i] && p2[i] && i < n)
    {
        if (p1[i] != p2[i])
        {
            return (p1[i] - p2[i]);
        }
        i++;
    }
}

#endif