#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	printf("FT: %s\n", ft_strnstr("abcefdefghijk", "efg", 12));
	printf("OR: %s\n\n", strnstr("abcefdefghijk", "efg", 12));
	printf("FT: %s\n", ft_strnstr("abcefdefghijk", "efg",8));
	printf("OR: %s\n\n", strnstr("abcefdefghijk", "efg", 8));
	printf("FT: %s\n", ft_strnstr("abcefdefghijk", "",8));
	printf("OR: %s\n\n", strnstr("abcefdefghijk", "", 8));
	printf("FT: %s\n", ft_strnstr("a12345678", "12345678",9));
	printf("OR: %s\n\n", strnstr("a12345678", "12345678", 9));
	printf("FT: %s\n", ft_strnstr("12345", "1234",8));
	printf("OR: %s\n\n", strnstr("12345", "1234", 8));
	printf("FT: %s\n", ft_strnstr("12345", "1223",8));
	printf("OR: %s\n\n", strnstr("12345", "1223", 8));
	printf("FT: %s\n", ft_strnstr("12345", "1223",0));
	printf("OR: %s\n\n", strnstr("12345", "1223", 0));
	return (0);
}
