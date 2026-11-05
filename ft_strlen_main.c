#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	int	i;

	if (argc < 2)
	{
		printf("No strings were passed to test\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		printf("'%s' = FT: %zu | OR: %zu\n", argv[i], ft_strlen(argv[i]), strlen(argv[i]));
		i++;
	}
	return (0);
}
