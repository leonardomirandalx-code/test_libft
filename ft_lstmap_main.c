#include "libft.h"
#include <stdio.h>

void	*ft_changer(void *lst)
{
	char	*str;
	size_t	i;

	i = 0;
	str = ft_strdup(lst);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 'a' - 'A';
		i++;
	}
	return (str);
}

void	ft_deletion(void *content)
{
	free (content);
}

void	ft_no_deletion(void *content)
{
	(void)content;
}

int	main(void)
{
	t_list	*head;
	t_list	*temp;
	t_list	*new_lst;

	head = NULL;
	ft_lstadd_back(&head, ft_lstnew("abcdefg"));
	ft_lstadd_back(&head, ft_lstnew("123easZ"));
	ft_lstadd_back(&head, ft_lstnew("node3"));
	ft_lstadd_back(&head, ft_lstnew("AAAAaaaAAe4"));
	temp = head;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	printf("\n");
	new_lst = ft_lstmap(head, ft_changer, ft_deletion);
	temp = new_lst;
	while (temp)
	{
		printf("%s\n", (char *)temp->content);
		temp = temp->next;
	}
	ft_lstclear(&head, ft_no_deletion);
	ft_lstclear(&new_lst, ft_deletion);
	return (0);
}
