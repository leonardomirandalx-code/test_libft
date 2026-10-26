#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[15] = "babanana";
	char	string2[10] = "";
	char	string3[17] = "abcdef\0ghij";
	char    string4[17] = "abcdef\0mhij";

	printf("FT: %s\n", ((unsigned char *)ft_memchr(string4, 365, 15)));
	printf("OR: %s\n", ((unsigned char *)memchr(string4, 365, 15)));
	printf("FT: %s\n", ((unsigned char *)ft_memchr(string3, 365, 15)));
	printf("OR: %s\n", ((unsigned char *)memchr(string3, 365, 15)));
	printf("FT: %s\n", ((unsigned char *)ft_memchr(string1, 'z', 15)));
	printf("OR: %s\n", ((unsigned char *)memchr(string1, 'z', 15)));
	printf("FT: %s\n", ((unsigned char *)ft_memchr(string1, 'n', 6)));
	printf("OR: %s\n", ((unsigned char *)memchr(string1, 'n', 6)));
	printf("FT: %s\n", ((unsigned char *)ft_memchr(string1, 'n', 4)));
	printf("OR: %s\n", ((unsigned char *)memchr(string1, 'n', 4)));
	printf("FT: %s\n", ((unsigned char *)ft_memchr(string2, 'n', 9)));
	printf("OR: %s\n", ((unsigned char *)memchr(string2, 'n', 9)));
	return (0);
}
