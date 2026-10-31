#include "libft.h"
#include <stdio.h>

int	main(void)
{
	t_list	*head;

	head = NULL;
	printf("'Head' addres: %p\n\n", (void *)&head);
	ft_lstadd_front(&head, ft_lstnew("abcde"));
	printf("Address of the new node pointed by head:\n-%p\n", (void *)head);
	printf("Address pointed by the new node pointed by head:\n-%p\n", (void *)head->next);
	printf("Content inside the new node pointed by head:\n-%s\n", (char *)head->content);
	printf("'Head' addres: %p\n\n", (void *)&head);
	printf("\nNow let's create a new node and put it at the beggining:\n\n");
	ft_lstadd_front(&head, ft_lstnew("12345"));
	printf("Newer node's address:\n-%p\n", (void *)head);
	printf("Now the new node point to the address of the older node:\n-%p\n", (void *)head->next);
	printf("Content inside the newer node: \n-%s\n", (char *)head->content);
	printf("\nLets check if the older node remains the same:\n\n");
	printf("Address pointed by older node (last node) :\n-%p\n", (void *)head->next->next);
	printf("Content of older node:\n-%s\n", (char *)head->next->content);
	free (head->next);
	free (head);
	return (0);
}
