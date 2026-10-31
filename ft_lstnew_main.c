#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*a;

	a = ft_lstnew("string\n");
	printf("%s\n", (char *)a->content);
	printf("%p\n", (void *)a->content);
	printf("%p\n", (void *)a->next);
	free (a);
	return (0);
}
