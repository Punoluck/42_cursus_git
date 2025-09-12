
#include "libft.h"

int	main(int argc, char **argv)
{
	int i;
	i = 0;
	printf("ft: %d\n", ft_strncmp("test\200", "test\0", 6));
	printf("ori: %d\n", strncmp("test\200", "test\0", 6));
}
