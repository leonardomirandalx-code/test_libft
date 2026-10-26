#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char s1[] = "abcdefghij";
	char s2[] = "abcdefghij";
	char s3[30] = "";
	char s4[] = "abcdzefghij";
	char s5[] = "aaaaaaaaaaa";

	printf("FT for n = 0: %d\n", ft_memcmp(s1, s2, 0));
	printf("OR for n = 0: %d\n\n", memcmp(s1, s2, 0));
	printf("FT for s1 x s2: %d\n", ft_memcmp(s1, s2, 10));
	printf("OR for s1 x s2: %d\n\n", memcmp(s1, s2, 10));
	printf("FT for s1 x s3: %d\n", ft_memcmp(s1, s3, 10));
	printf("OR for s1 x s3: %d\n\n", memcmp(s1, s3, 10));
	printf("FT for s1 x s4: %d\n", ft_memcmp(s1, s4, 10));
	printf("OR for s1 x s4: %d\n\n", memcmp(s1, s4, 10));
	printf("FT for s1 x s5: %d\n", ft_memcmp(s1, s5, 10));
	printf("OR for s1 x s5: %d\n\n", memcmp(s1, s5, 10));
	return (0);
}
