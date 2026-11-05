#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc < 2)
	{
		printf("No values were passed to test\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		c = ft_atoi(argv[i]);
		printf("(value: %d) = FT: %d | OR: %d\n", c, ft_isascii(c), isascii(c));
		i++;
	}
	return (0);
}
