#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	char	*string;

	if (argc != 3)
	{
		printf("Please input 2 arguments (exactly)!\n");
		return (1);
	}
	string = ft_strjoin(argv[1], argv[2]);
	printf("Strings together: %s\n", string);
	free (string);
	return (0);
}
