
#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{

	unsigned char	src[11] = "helloadsss";

	ft_memmove(src+2, src, 8 * sizeof(char));
	printf("ft: %s\n", src+2);
}
