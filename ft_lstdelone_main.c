#include "libft.h"
#include <stdio.h>

void	ft_del(void *content)
{
	free (content);
}

int	main(void)
{
	t_list	*head;
	t_list	*temp;

	head = NULL;
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("1234")));
	ft_lstadd_front(&head, ft_lstnew(ft_strdup("abcd")));
	ft_lstadd_back(&head, ft_lstnew(ft_strdup("ultima")));
	temp = head;
	while (temp->next)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	printf("%s\n", (char *)temp->content);
	ft_lstdelone(head->next->next ,ft_del);
	head->next->next = NULL;
	temp = head;
	printf("\n");
	while (temp->next)
        {
                printf("%s\n", (char *)temp->content);
                temp = temp->next;
        }
	printf("%s\n", (char *)temp->content);
	ft_lstdelone(head->next, ft_del);
	ft_lstdelone(head, ft_del);
	return (0);
}
