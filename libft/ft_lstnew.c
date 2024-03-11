#include "libft.h"
#include <stdlib.h>

t_list	*ft_lstnew(void *content)
{
	t_list *new_node = (t_list *)malloc(sizeof(t_list));
	if (new_node == NULL)
		return NULL;


	new_node->content = content;
	new_node->next = NULL;

	return new_node;
}

// int main() {
//     // Create a new node with content 42
//     t_list *new_node = create_node(42);
//     if (new_node != NULL) {
//         printf("New node content: %d\n", new_node->content);
//         printf("New node next pointer: %p\n", (void *)new_node->next); // Print address of next pointer (should be NULL)
//         free(new_node); // Free allocated memory
//     } else {
//         printf("Memory allocation failed.\n");
//     }
//     return 0;
// }