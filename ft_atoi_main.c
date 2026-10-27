#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	printf("FT: %d\n", ft_atoi("    \n-42"));
	printf("OR: %d\n\n", atoi("    \n-42"));
	printf("FT: %d\n", ft_atoi("    \n--42"));
	printf("OR: %d\n\n", atoi("    \n--42"));
	printf("FT: %d\n", ft_atoi(" \n\n976856"));
	printf("OR: %d\n\n", atoi(" \n\n976856"));
	printf("FT: %d\n", ft_atoi("abcdef"));
	printf("OR: %d\n\n", atoi("abcdef"));
	printf("FT: %d\n", ft_atoi("+975"));
	printf("OR: %d\n\n", atoi("+975"));
	printf("FT: %d\n", ft_atoi(""));
	printf("OR: %d\n\n", atoi(""));
	printf("FT overflow: %d\n", ft_atoi("+2147483648"));
	printf("OR overflow: %d\n\n", atoi("+2147483648"));
	printf("FT int max: %d\n", ft_atoi("+2147483647"));
	printf("OR int max: %d\n\n", atoi("+2147483647"));
	printf("FT int min: %d\n", ft_atoi("-2147483648"));
	printf("OR int min: %d\n\n", atoi("-2147483648"));
	printf("FT overflow min: %d\n", ft_atoi("-2147483649"));
	printf("OR overflow min: %d\n\n", atoi("-2147483649"));
	printf("FT: %d\n", ft_atoi("-"));
	printf("OR: %d\n\n", atoi("-"));
	return (0);
}


int main(int ac, char **av)
{
	printf("Test de ifisprintr\n");
	
}