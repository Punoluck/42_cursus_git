
#include "libft.h"

int	main(int argc, char **argv)
{

	unsigned char	s1[30] = "helloadssjaad";
	unsigned char	s2[30] = "helloadssjaad";
	int result;

	for (int i = 0; i < 128; i++)
	{	
		result = ft_isprint(i);
		printf("ft: %d\n", result);

		result = isprint(i);
		printf("ori: %d\n", result);
	}
	printf("\n");
}
