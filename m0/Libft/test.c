
#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	unsigned char	ftpdest[3];
	unsigned char	pdest[3];
	unsigned char	src[] = "Hello";

	ft_memcpy(ftpdest, src, 5 * sizeof(char));
	printf("ft: %s\n", ftpdest);
	memcpy(pdest, src, 5 * sizeof(char));
	printf("original: %s\n", pdest);
}
