#include "libft.h"
#include <stdlib.h>

void ft_lstadd_front(t_list **lst, t_list *new)
{
	if(new != NULL)
	{
		new->next = *lst;
		*lst = new;
	}
}

// int main() {
//     // Create a list with one node
//     t_list *first_node = (t_list *)malloc(sizeof(t_list));
//     first_node->content = "First Node";
//     first_node->next = NULL;

//     // Create a new node to add at the front
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     new_node->content = "New Node";
//     new_node->next = NULL;

//     // Add the new node at the beginning of the list
//     ft_lstadd_front(&first_node, new_node);

//     return 0;
// }