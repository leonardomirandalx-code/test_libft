#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	string1[] = "abcdefghijk";
	char	string2[] = "abcdefghijk";
	char    string3[] = "12345678";
	char    string4[] = "12345678";
	char    string5[] = "biggerthanbuffer";
	char    string6[] = "bifferthanbuffer";
	int	nzero;

	nzero = 0;
	printf("Normal tests:\n");
	printf("before FT: %s\n", string1);
	printf("before OR: %s\n", string2);
	ft_memset(string1, 'z', 5);
	memset(string2, 'z', 5);
	printf("\n");
	printf("after FT: %s\n", string1);
	printf("after OR: %s\n", string2);
	printf("\n Test with zero:\n");
	printf("before FT: %s\n", string3);
	printf("before OR: %s\n", string4);
	ft_memset(string3, 'z', nzero);
	memset(string4, 'z', nzero);
	printf("\n");
	printf("after FT: %s\n", string3);
	printf("after OR: %s\n", string4);
	printf("\n Test with overflow:\n");
	printf("before FT: %s\n", string3);
	printf("before OR: %s\n", string4);
	ft_memset(string3, 'a', 12);
	//memset(string4, 'a', 12);
	printf("\n");
	printf("after FT: %s\n", string3);
	printf("after OR: %s\n", string4);
	printf("\n Test with char over 255:\n");
	printf("before FT: %s\n", string5);
	printf("before OR: %s\n", string6);
	ft_memset(string5, 'a', 12);
	memset(string6, 'a', 12);
	printf("\n");
	printf("after FT: %s\n", string5);
	printf("after OR: %s\n", string6);
	return (0);
}
