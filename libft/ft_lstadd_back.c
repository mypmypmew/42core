#include "libft.h"
#include <stdlib.h>

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(*lst == NULL)
		*lst = new;

	t_list *last = *lst;
	while(last->next != NULL)
		last = last->next;

	last->next = new;
}

// int main() {
//     // Create a list with two nodes
//     t_list *first_node = (t_list *)malloc(sizeof(t_list));
//     first_node->content = "First Node";

//     t_list *second_node = (t_list *)malloc(sizeof(t_list));
//     second_node->content = "Second Node";
//     second_node->next = NULL;

//     // Connect the nodes
//     first_node->next = second_node;

//     // Create a new node to add at the end
//     t_list *new_node = (t_list *)malloc(sizeof(t_list));
//     new_node->content = "New Node";
//     new_node->next = NULL;

//     // Add the new node at the end of the list
//     ft_lstadd_back(&first_node, new_node);

//     return 0;
// }