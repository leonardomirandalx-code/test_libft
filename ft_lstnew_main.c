#include "libft.h"
#include <stdio.h>

int	main(void)
{
	int	n;
	t_list	*a;

	n = 42;
	a = ft_lstnew(&n);
	printf("%d\n", *(int *)a->content);
	return (0);
}
