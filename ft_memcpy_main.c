#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	src1[] = "123456789";
	char	dest1[] = "abcdefghi";
	char	src2[] = "123456789";
	char    dest2[] = "abcdefghi";
	char	src3[] = "school42";

	printf("Before FT: %s\n", dest1);
	printf("Before OR: %s\n", dest2);
	ft_memcpy(dest1, src1, 5);
	memcpy(dest2, src2, 5);
	printf("After FT: %s\n", dest1);
	printf("After OR: %s\n", dest2);
	printf("\nNow lets test with n as 0:\n");
	ft_memcpy(dest1, src3, 0);
	memcpy(dest2, src3, 0);
	printf("After FT: %s\n", dest1);
	printf("After OR: %s\n", dest2);
	printf("Nothing changes :)\n\nLet's see an overlap inside the same string:\n");
	ft_memcpy(&src3[3], src3, 6);
	printf("%s\n", src3);	
	return (0);
}
