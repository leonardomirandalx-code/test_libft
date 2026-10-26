#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 1;

	while (i < argc)
	{
		printf("FT: %zu\n", ft_strlen(argv[i]));
		printf("OR: %zu\n", strlen(argv[i]));
		printf("\n");
		i++;
	}
	printf("Test with special characters: $ * ? [] \\ \n\n");
	printf("FT: %zu\n", ft_strlen("$HOME * a b"));
	printf("OR: %zu\n", strlen("$HOME * a b"));
	printf("\n");
	printf("FT: %zu\n", ft_strlen("abcdef\\ghijk"));
	printf("OR: %zu\n", strlen("abcdef\\ghijk"));
	printf("\n");
	printf("FT: %zu\n", ft_strlen("1245[[]45636"));
	printf("OR: %zu\n", strlen("1245[[]45636"));
	printf("\n");
	printf("FT: %zu\n", ft_strlen("*****"));
	printf("OR: %zu\n", strlen("*****"));
	printf("\n");
	printf("FT: %zu\n", ft_strlen("#a#b#"));
	printf("OR: %zu\n", strlen("#a#b#"));
	printf("\n");
	printf("FT: %zu\n", ft_strlen(""));
	printf("OR: %zu\n", strlen(""));
	printf("\n");
	printf("FT: %zu\n", ft_strlen("ABCD\0EFG"));
	printf("OR: %zu\n", strlen("ABCD\0EFG"));
	return (0);
}
