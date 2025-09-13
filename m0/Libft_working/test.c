#include "libft.h"

int main(void)
{
    const char    s1[20] = "0123456789";
    char    **s2;
    int     n;

    s2 = ft_split("231", ',');

    n = 0;
    while (s2[n])
        printf("%s\n", s2[n++]);
    n = 0;
    while (s2[n])
        free(s2[n++]);
    free(s2[n]);
    free(s2);
}
