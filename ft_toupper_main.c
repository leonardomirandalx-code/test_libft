#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	int	i;
	int	j;
	char	string1[] = "mAKe the lower upper";
	char    string2[] = "mAKe the lower upper";
	char	string3[] = "123ANCDeeec/$%";
	char    string4[] = "123ANCDeeec/$%";

	i = 0;
	j = 0;
	printf("FT: 1 before ft_toupper: %s\n", string1);
	printf("OR: 2 before toupper: %s\n", string2);
	while (string1[i])
	{
		string1[i] = ft_toupper(string1[i]);
		i++;
	}
	i = 0;
	while (string2[i])
	{
		string2[i] = toupper(string2[i]);
		i++;
	}
	printf("FT: 1 after ft_toupper: %s\n", string1);
	printf("OR: 2 after toupper: %s\n\n", string2);
	printf("FT: 3 before ft_toupper: %s\n", string3);
	printf("OR: 4 before toupper: %s\n", string4);
	while (string3[j])
	{
		string3[j] = ft_toupper(string3[j]);
		j++;
	}
	j = 0;
	while (string4[j])
	{
		string4[j] = toupper(string4[j]);
		j++;
	}
	printf("FT: 3 after ft_toupper: %s\n", string3);
	printf("OR: 4 after toupper: %s\n", string4);
	return (0);
}
