#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

char	ft_turnchar(char *s)
{
	char	c;
	
	c = s[0];
	return (c);
}

int	main(int argc, char **argv)
{
	char	**strings;
	size_t	i;

	i = 0;
	if (argc != 3)
	{
		printf("The input should be 'strings' and 'separator', plase\n");
		return (1);
	}
	if (ft_strlen(argv[2]) != 1 && argv[2][0] != '\0')
	{
		printf("The second argument is a char as 'separator', plase use only one character\n");
		return (1);
	}
	strings = ft_split(argv[1], ft_turnchar(argv[2]));
	if (strings == NULL)
		return (1);
	while (strings[i] != NULL)
	{
		printf("%s\n", strings[i]);
		i++;
	}
	i = 0;
	while (strings[i] != NULL)
	{
		free (strings[i]);
		i++;
	}
	free (strings);
	return (0);
}
