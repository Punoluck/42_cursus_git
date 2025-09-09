
#include "libft.h"

int	main(int argc, char **argv)
{

	char	fts1[30] = "helloadssjaad";
	const char	fts2[10] = "new";
	size_t result;

	result = ft_strlcat(fts1, fts2, 12);
	printf("%s\n", fts1);
	printf("%ld\n", result);
}
