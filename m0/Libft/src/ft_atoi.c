#ifndef FT_ATOI_H
#define FT_ATOI_H

unsigned int ft_atoi(const char *str)
{
    unsigned int i;
    unsigned int result;
    unsigned int sign;

    i = 0;
    result = 0;
    sign = 1;
    if (str[i] && (str[i] == '+' || str[i] == '-'))
    {
        if (str[i] == '-')
        {
            sign *= -1;
        }
        i++;
    }

    while (str[i] && '0' <= str[i] && str[i] <= '9')
    {
        result *= 10;
        result += str[i] - '0';
        i += 1;
    }
    return (sign * result);
}

#endif