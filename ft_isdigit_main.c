#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	int	i;
	int	c;

	if (argc < 2)
	{
		printf("No characters were passed to test\n");
		return (1);
	}
	i = 1;
	while (i < argc)
	{
		c = (unsigned char)argv[i][0];
		printf("'%c' (ASCII: %d) = FT: %d | OR: %d\n", c, c, ft_isdigit(c), isdigit(c));
		i++;
	}
	return (0);
}
