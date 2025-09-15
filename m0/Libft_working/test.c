#include "libft.h"
#include <limits.h>

static void    f(unsigned int i, char *c)
{
    if (i % 2 == 0)
        *c = *c - 32;
}

int main(void)
{
    char    s1[20] = "2134565789";
    char    s2;

    s2 = ft_toupper(0);
    printf("%c\n", s2);

    // s2 = ft_split("231", ',');

    // n = 0;
    // while (s2[n])
    //     printf("%s\n", s2[n++]);
    // n = 0;
    // while (s2[n])
    //     free(s2[n++]);
    // free(s2[n]);
    // free(s2);
}
