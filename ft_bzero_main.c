#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[] = "abcdefghijk";
	char	string2[] = "abcdefghijk";
	char    string3[] = "12345678";
	char    string4[] = "12345678";
	size_t	n_zero;

	n_zero = 0;
	printf("Normal test:\n");
	printf("before FT: %s\n", string1);
	printf("before OR: %s\n", string2);
	ft_bzero(string1, 7);
	bzero(string2, 7);
	printf("\n");
	printf("after FT: %s\n", string1);
	printf("after OR: %s\n", string2);
	printf("\nTest with zero:\n");
	printf("before FT: %s\n", string3);
	printf("before OR: %s\n", string4);
	ft_bzero(string3, n_zero);
	bzero(string4, n_zero);
	printf("after FT: %s\n", string3);
	printf("after OR: %s\n", string4);
	printf("\nOverflow: Due to extra size, string 3 invades string 4 and writes in it\n");
	ft_bzero(string3, 12);
	printf("String 3: %s\n", string3);
	printf("String 4: %s\n", string4);
	return (0);
}
