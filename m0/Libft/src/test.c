
#include "ft_memcpy.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	unsigned char	pdest[20];

	printf("%s\n", argv[1]);
	ft_memcpy(pdest, argv[1], 5 * sizeof(char));
	printf("%s", pdest);
}
