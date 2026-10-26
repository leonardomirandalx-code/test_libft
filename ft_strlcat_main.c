#include "libft.h"
#include <stdio.h>
#include <bsd/string.h>

void	ft_abnormal_string(char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size)
	{
		dst[i] = 'l';
		i++;
	}
}

int	main(void)
{
	char	src1[] = "abcdefg";
	char	src2[] = "1234567890";
	char	src3[] = "";
	char	dst2[30] = "bbbbbbbb";
	char	dst3[40] = "please, concatenate after this: ";
	char	dst4[22] = "";
	char	dst5[29];

	printf("dst before strlcat: %s\n", dst2);
	printf("src1 + dest2 = %zu:  and the dest become: ", ft_strlcat(dst2, src1, 30));
	printf("%s\n\n", dst2);
	ft_abnormal_string(dst5, 29);
	printf("dst5 as an example of return size condition: %zu\n\n", ft_strlcat(dst5, src1, 29));
	printf("dest3 + empty src3. returns %zu and make dest3: ", ft_strlcat(dst3, src3, 40));
	printf("%s\n\n", dst3);
	printf("src2 to an empty dest (with enough space). Return: %zu and final str: ", ft_strlcat(dst4, src2, 22));
	printf("%s\n", dst4);
	return (0);
}
