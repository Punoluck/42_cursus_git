#ifndef FT_STRNCMP_H
#define FT_STRNCMP_H

int ft_strncmp(const char *s1, const char *s2, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (0);
}

#endif