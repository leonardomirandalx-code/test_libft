#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	char	*string1;
	char    *string2;
	char    *string3;
	char    *string4;
	char	source1[] = "abcdef";
	char	source2[] = "abcdef";
	char	*dest1;
	char	*dest2;

	string1 = ft_strdup("       ");
	string2 = strdup("       ");
	string3 = ft_strdup("");
	string4 = strdup("");
	printf("FT: [%s]\n", string1);
	printf("OR: [%s]\n", string2);
	printf("FT: [%s]\n", string3);
	printf("OR: [%s]\n", string4);
	dest1 = ft_strdup(source1);
	dest2 = strdup(source2);
	printf("\n");
	printf("FT: New string: %s and the addres: %p\n", dest1, dest1);
	printf("FT: Original string: %s and the addres: %p\n\n", source1, source1);
	printf("OR: New string: %s and the addres: %p\n", dest2, dest2);
	printf("OR: Original string: %s and the addres: %p\n\n", source2, source2);
	free (string1);
	free (string2);
	free (string3);
	free (string4);
	free (dest1);
	free (dest2);
	return (0);
}
