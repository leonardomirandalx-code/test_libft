#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	c;
	int	evaluate;

	c = -1;
	evaluate = 1;
	while (c <= 255)
	{
		if ((ft_isalnum(c) == 0 && isalnum(c) != 0) ||
			(ft_isalnum(c) != 0 && isalnum(c) == 0))
		{
			printf("FT for character ASCII %d: %d\n", c, ft_isalnum(c));
			printf("OR for character ASCII %d: %d\n", c, isalnum(c));
			printf("\n");
			evaluate = 0;
		}
		c++;
	}
	if (evaluate == 1)
		printf("Everything working fine :)\n");
	else
		printf("There is a difference in the output :(\n");
	return (0);
}
