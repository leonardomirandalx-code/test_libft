#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*string;

	if (argc != 3)
	{
		printf("%s\n", "Please, input 2 arguments: string and set");
		return (1);
	}
	string = ft_strtrim(argv[1], argv[2]);
	printf("Trimmed: %s\n", string);
	free (string);
	return (0);
}
