#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("%s\n", ft_strchr("banana", 'n'));
	printf("%s\n", strchr("banana", 'n'));
	
	if (ft_strchr("abcdefghijklmnopqrstuvwxyz", '3') == NULL)
		printf("NULL\n");
	else
		printf("Incorrect behavior\n");
	if (strchr("abcdefghijklmnopqrstuvwxyz", '3') == NULL)
		printf("NULL\n");
	else
		printf("Incorrect behavior\n");
	printf("%s\n", ft_strchr("abcdefghijklmnopqrstuvwxyz", '\0'));
	printf("%s\n", strchr("abcdefghijklmnopqrstuvwxyz", '\0'));
	return (0);
}
