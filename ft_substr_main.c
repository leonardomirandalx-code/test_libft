#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*string;

	if (argc != 4)
	{
		printf("%s\n", "Please, input 3 arguments: string, start and len");
		return (1);
	}
	string = ft_substr(argv[1], ft_atoi(argv[2]), ft_atoi(argv[3]));
	printf("Substring: %s\n", string);
	free (string);
	return (0);
}
