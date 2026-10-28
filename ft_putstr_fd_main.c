#include "libft.h"
#include <stdio.h>

static int	ft_validate_fd(const char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (0);
	if (str[i] == '-' && str[i + 1])
		i++;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	fd;

	if (argc != 3)
	{
		printf("Please, for %s: string to be printed + file descriptor\n", argv[0]);
		return (1);
	}
	if (!ft_validate_fd(argv[2]))
	{
		printf("File descriptor (argument 2) should be a number\n");
		return (1);
	}
	fd = ft_atoi(argv[2]);
	ft_putstr_fd(argv[1], fd);
	ft_putstr_fd(NULL, 1);
	printf("\n");
	return (0);
}
