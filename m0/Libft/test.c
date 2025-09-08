
#include "ft_memcpy.c"
#include <stdio.h>

int	main(int argc, char **argv)
{
	unsigned char	ftpdest[20];
	unsigned char	pdest[20];
	unsigned char	src[] = "h";

	ft_memcpy(ftpdest, src, 5 * sizeof(char));
	printf("ft: %s\n", ftpdest);
	memcpy(pdest, src, 5 * sizeof(char));
	printf("original: %s\n", pdest);
}
