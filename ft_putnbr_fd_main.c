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
	int	n;

	if (argc != 3)
	{
		printf("Please, for %s: number to be printed + file descriptor\n", argv[0]);
		return (1);
	}
	if (!ft_validate_fd(argv[1]))
        {
                printf("Argument 1 should be a number\n");
                return (1);
        }
	if (!ft_validate_fd(argv[2]))
	{
		printf("File descriptor (argument 2) should be a number\n");
		return (1);
	}
	fd = ft_atoi(argv[2]);
	n = ft_atoi(argv[1]);
	ft_putnbr_fd(n, fd);
	printf("\n");
	return (0);
}
