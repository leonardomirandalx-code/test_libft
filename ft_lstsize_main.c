#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = NULL;

	printf("Empty list:\n\n-Size: %u\n", ft_lstsize(head));
	printf("\n1 node:\n\n");
	ft_lstadd_front(&head, ft_lstnew("1"));
	printf("-Size: %u\n", ft_lstsize(head));
	printf("\nList with multiple nodes:\n\n");
	ft_lstadd_front(&head, ft_lstnew("2"));
	ft_lstadd_front(&head, ft_lstnew("3"));
	ft_lstadd_front(&head, ft_lstnew("4"));
	printf("%s\n", (char *)head->content);
	printf("%s\n", (char *)head->next->content);
	printf("%s\n", (char *)head->next->next->content);
	printf("%s\n", (char *)head->next->next->next->content);
	printf("-Size: %u\n", ft_lstsize(head));
	free (head->next->next->next);
	free (head->next->next);
	free (head->next);
	free (head);
	return (0);
}
