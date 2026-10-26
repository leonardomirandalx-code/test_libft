#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

static char	ft_change_mapi(unsigned int n, char c)
{
	(void)n;
	if (c >= 'A' && c <= 'Z')
	c += 'a' - 'A';
	return (c);
}

int	main(int argc, char **argv)
{
	char	**strings;
	int	i;
	int	j;

	if (argc < 2)
	{
		printf("No arguments passed: error!\n");
		return (1);
	}
	strings = malloc(argc * sizeof(char *));
	if (strings == NULL)
	{
		printf("Malloc error\n");
		return (1);
	}
	j = 0;
	i = 1;
	while (i < argc)
	{

		strings[j] = ft_strmapi(argv[i], ft_change_mapi);
		printf("%s\n", strings[j]);
		i++;
		j++;
	}
	while (j >= 0)
	{
		free (strings[j]);
		j--;
	}
	return (0);
}
