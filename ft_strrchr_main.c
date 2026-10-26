#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strrchr("banana", 'n'));
	printf("%s\n", strrchr("banana", 'n'));
	
	if (ft_strrchr("abcdefghijklmnopqrstuvwxyz", '3') == NULL)
		printf("NULL\n");
	else
		printf("Incorrect behavior\n");
	if (strrchr("abcdefghijklmnopqrstuvwxyz", '3') == NULL)
		printf("NULL\n");
	else
		printf("Incorrect behavior\n");
	printf("%s\n", ft_strrchr("abcdefghijklmnopqrstuvwxyz", '\0'));
	printf("%s\n", strrchr("abcdefghijklmnopqrstuvwxyz", '\0'));
	return (0);
}
