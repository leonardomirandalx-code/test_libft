#include "libft.h"
#include <stdio.h>

void	ft_delc(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("1234")));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("5678")));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("abcd")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("zzzz")));
	temp = head;
	while (temp->next)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&head, ft_delc);
}
