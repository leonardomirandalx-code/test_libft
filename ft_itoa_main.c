#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	char	*number1;
	char    *number2;
	char    *number3;
	char    *number4;
	char    *number5;
	char    *number6;
	char    *number7;
	char    *number8;

	number1 = ft_itoa(INT_MAX);
	number2 = ft_itoa(INT_MIN);
	number3 = ft_itoa(42);
	number4 = ft_itoa(-42);
	number5 = ft_itoa(0);
	number6 = ft_itoa(-0);
	number7 = ft_itoa(9);
	number8 = ft_itoa(-9);
	printf("%s\n", number1);
	printf("%s\n", number2);
	printf("%s\n", number3);
	printf("%s\n", number4);
	printf("%s\n", number5);
	printf("%s\n", number6);
	printf("%s\n", number7);
	printf("%s\n", number8);
	free(number1);
	free(number2);
	free(number3);
	free(number4);
	free(number5);
	free(number6);
	free(number7);
	free(number8);
        return (0);
}
