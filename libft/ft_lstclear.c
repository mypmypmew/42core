#include "libft.h"
#include <stdlib.h>

void ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *current = *lst;
	t_list *next_node;

	while(current != NULL)
	{
		next_node = current->next;
		del(current->content);

		free(current);

		current = next_node;
	}
	free(lst);
}