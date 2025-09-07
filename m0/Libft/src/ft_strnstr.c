#ifndef FT_STRNSTR_H
#define FT_STRNSTR_H

char *ft_strnstr(const char *big, const char *little, unsigned int n)
{
    unsigned int i;
    unsigned int j;

    if (*little == '\0')
    {
        return ((char *)big);
    }

    i = 0;
    while (big[i] && i < n)
    {
        j = 0;
        while (big[i] == little[j])
        {
            i++;
            j++;

            if (!little[j])
            {
                return ((char *)big + i - j);
            }

            if (big[i] != little[j])
            {
                break;
            }
        }
        i++;
    }
}

#endif