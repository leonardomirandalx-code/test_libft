#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("OR: %d\n", strncmp("aaaaaaaa", "aaazzz", 0));
	printf("FT: %d\n", ft_strncmp("aaaaaaaa", "aaazzz", 0));
	printf("OR: %d\n", strncmp("aaaaaaaa", "aaazzz", 4));
	printf("FT: %d\n", ft_strncmp("aaaaaaaa", "aaazzz", 4));
	printf("OR: %d\n", strncmp("aaaaaaaa", "aaazzz", 3));
	printf("FT: %d\n", ft_strncmp("aaaaaaaa", "aaazzz", 3));
	printf("OR: %d\n", strncmp("lllll", "ccccc", 5));
	printf("FT: %d\n", ft_strncmp("lllll", "ccccc", 5));
	printf("OR: %d\n", strncmp("leonardo", "leonar", 9));
	printf("FT: %d\n", ft_strncmp("leonardo", "leonar", 9));
	return (0);
}
