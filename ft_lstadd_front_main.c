#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*a;
	int	i;

	i = 0;
	a = ft_lstnew("42");
	while (i < 10)
	{
		printf("%d", i++);
		ft_lstadd_front(&a, ft_lstnew((void *)&i));
	}
	while (a->next)
	{
		printf("%i\n", *(int *)a->content);
		a = a->next;
	}
}
