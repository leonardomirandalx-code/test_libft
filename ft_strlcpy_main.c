#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

int	main(void)
{
	char	s1[] = "12345678";
	char	s2[] = "";
	char	s3[] = "this is the source";
	char	d1[10];
	char	d2[6];
	char	d3[15] = "abcdefghijklmn";
	char	d4[] = "";

	printf("d1 before copy: %s\n", d1);
	printf("d2 before copy: %s\n", d2);
	printf("d3 before copy: %s\n\n", d3);
	printf("Size of src: %zu and d1 after copy: ",ft_strlcpy(d1, s1, 10));
	printf("%s\n\n", d1);
	printf("Size of src: %zu and d2 after copy: ",ft_strlcpy(d2, s1, 6));
	printf("%s\n\n", d2);
	printf("Size of src: %zu and d3 after copy of empty string: ",ft_strlcpy(d3, s2, 15));
	printf("%s\n\n", d3);
	printf("Size of src: %zu and d3 after copy: ",ft_strlcpy(d3, s3, 15));
	printf("%s\n\n", d3);
	ft_strlcpy(d4, s1, 0);
	printf("If the buffer dest is empty, dont write anything. d4: %s\n", d4);
	return (0);
}

