#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int	main(void)
{
	char	*subs1;
	char    *subs2;
	char    *subs3;
	char    *subs4;
	char	*subs5;
	char	*subs6;
	char	*subs7;
	char	*string1 = "0123456789";
	char	*string3 = "1";
	char	*string4 = "         ";
	char	*string5 = "hello";

	subs1 = ft_substr(string1, 3, 5);
	subs2 = ft_substr(string1, 4, 9);
	subs3 = ft_substr(string3, 5, 9);
	subs4 = ft_substr(string4, 7, 8);
	subs5 = ft_substr(string5, 2, SIZE_MAX);
	subs6 = ft_substr(string5, 9, 2);
	subs7 = ft_substr(string1, 10, 3);
	printf("STR: %s\n", string1);
	printf("SUB: %s\n\n", subs1);
	printf("STR: %s\n", string1);
	printf("SUB: %s\n\n", subs2);
	printf("STR: %s\n", string3);
	printf("SUB: [%s]\n\n", subs3);
	printf("STR: [%s]\n", string4);
	printf("SUB: [%s]\n\n", subs4);
	printf("Testing the limits:\n");
	printf("SIZE_MAX in len: %s\n", subs5);
	printf("Start bigger than lenght of the string: [%s]\n", subs6);
	printf("Start same size as string: [%s]\n", subs7);
	printf("Protecting the NULL: %s\n", ft_substr(NULL, 4, 2));
	free (subs1);
	free (subs2);
	free (subs3);
	free (subs4);
	free (subs5);
	free (subs6);
	free (subs7);
	return (0);

}
