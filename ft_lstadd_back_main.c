#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head;
	t_list	*tmp;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew("abcdef"));
	ft_lstadd_back(&head, ft_lstnew("123456"));
	ft_lstadd_front(&head, ft_lstnew("aaaaaa"));
	tmp = head;
	while (tmp->next)
	{
		printf("%s\n", (char *)tmp->content);
		tmp = tmp->next;
	}
	printf("%s\n", (char *)tmp->content);
	free (head->next->next);
	free (head->next);
	free (head);
	return (0);
}
