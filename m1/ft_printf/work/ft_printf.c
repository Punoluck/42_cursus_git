#include "ft_printf.h"

static void arg_found(va_list ap, char type)
{
    switch (type)
    {
    case 'c':
        ft_putchar_fd((char) va_arg(ap, int), 1);
        break;
    case 's':
        ft_putstr_fd(va_arg(ap, char *), 1);
        break;
    case 'd':
    case 'i':
        ft_putnbr_fd(va_arg(ap, int), 1);
        break;
    case 'u':
        ft_putnbr_fd(va_arg(ap, int), 1);
        break;
    case 'x':
    case 'X':
    case 'p':
        ft_puthex_fd(va_arg(ap, unsigned long long), 1,type);
        break;
    case '%':
        ft_putchar_fd('%', 1);
        break;
    }
}

int ft_printf(const char *fmt, ...)
{
    va_list ap;

    if (!fmt)
        return (0);
    va_start(ap, fmt);
    while (*fmt)
    {
        if (*fmt == '%')
        {
            fmt++;
            arg_found(ap, *fmt);
        }
        else if (*fmt)
            ft_putchar_fd(*fmt, 1);
        fmt++;
    }
    va_end(ap);
    return (0);
}
