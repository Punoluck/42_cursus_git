#include "ft_printf.h"
#include <limits.h>
#include <stdio.h>

int main(void)
{
    // int x = 42;
    // int *p = &x;

    // printf("%d", ft_printf("ft_INT_MAX : %d\n", INT_MAX+1));
    // printf("INT_MAX : %d\n", INT_MAX+1);
    // ft_printf("\n");
    // ft_printf("ft_INT_MIN : %d\n", INT_MIN-1);
    // printf("INT_MIN : %d\n", INT_MIN-1);
    // ft_printf("\n");
    // ft_printf("ft_address : %p\n", p);
    // printf("address : %p\n", p);

    // printf("Correct with %%p: %p\n", (void*)p);
    // printf("Wrong with %%d: %d\n", p);
    // printf("Wrong with %%ld: %ld\n", (long)p);
    // printf("%d\n", ft_printf("hi : %s", "hi"));
    // printf("%d\n", ft_printf("hello : %s", "hello"));
    // printf("%d\n", ft_printf("\n"));
    // printf("hi : %s", "hi");
    // printf("hello : %s", "hello");
    // ft_printf("%c", '0');
    printf("\nlen : %d\n", ft_printf(" %p %p ", LONG_MIN, LONG_MAX));
    printf("\nlen : %d\n", printf(" %p %p ", LONG_MIN, LONG_MAX));
}