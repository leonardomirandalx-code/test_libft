#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

static void	*ft_write_memory(void *s, size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t		i;

	p = (unsigned char *)s;
	i = 0;
	while (i < nmemb * size)
	{
		p[i] = 'a';
		i++;
	}
	return (s);
}

static void	ft_print_bytes(void *s, size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t		i;

	p = (unsigned char *)s;
	i = 0;
	while (i < size * nmemb)
	{
		printf("%c", p[i]);
		i++;
	}
	printf(".\n");
}

static void     ft_print_zeros(void *s, size_t nmemb, size_t size)
{
	unsigned char	*p;
	size_t		i;

	p = (unsigned char *)s;
	i = 0;
	while (i < size * nmemb && p[i] == '\0')
	{
		printf("0");
		i++;
	}
	printf(".\n");
}

int	main(void)
{
	char	*or;
	char	*ft;
	size_t	size_m;

	size_m = SIZE_MAX;
	printf("Zeroing on reused dirty block (5 x int):\n\n");
	or = calloc(5, sizeof(int));
	ft = ft_calloc(5, sizeof(int));
	ft_write_memory(or, 5, sizeof(int));
	ft_write_memory(ft, 5, sizeof(int));
	ft_print_bytes(or, 5, sizeof(int));
	ft_print_bytes(ft, 5, sizeof(int));
	printf("\n");
	printf("& de OR: %p\n", or);
	printf("& de FT: %p\n", ft);
	printf("\n");
	free (or);
	or = calloc(5, sizeof(int));
	ft_print_zeros(or, 5, sizeof(int));
	printf("& de OR: %p\n", or);
	free (ft);
	ft = ft_calloc(5, sizeof(int));
	ft_print_zeros(ft, 5, sizeof(int));
	printf("& de FT: %p\n--------\n", ft);
	free (or);
	free (ft);
	printf("Test with 0 in nmemb/size:\n\n");
	or = calloc(0, sizeof(int));
	ft = ft_calloc(0, sizeof(int));
	printf("& OR: %p\n& FT: %p\n\n", or, ft);
	free (or);
	free (ft);
	printf("Free worked out :)\n--------\n");
	printf("Overflow test:\n\n");
	or = calloc(size_m, sizeof(int));
	ft = ft_calloc(size_m, sizeof(int));
	printf("& OR: %p\n& FT: %p\n\n", or, ft);
	free (or);
	free (ft);
	or = calloc(1, size_m);
	ft = ft_calloc(1 ,size_m);
	printf("& OR: %p\n& FT: %p\n\n", or, ft);
	free (or);
	free (ft);
	or = calloc(size_m / 2, 2);
	ft = ft_calloc(size_m / 2, 2);
	printf("& OR: %p\n& FT: %p\n\n", or, ft);
	free (or);
	free (ft);
	return (0);
}
