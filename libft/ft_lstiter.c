#include "libft.h"
#include <stdlib.h>

void ft_lstiter(t_list *lst, void (*f)(void *))
{

	if(lst != NULL)
	{
		while(lst->next != NULL)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
}

// void print_int(void *ptr) {
//     int *int_ptr = (int *)ptr;
//     printf("%d\n", *int_ptr);
// }

// int main() {
//     // Create a list with three nodes
//     t_list *first_node = (t_list *)malloc(sizeof(t_list));
//     int content1 = 42;
//     first_node->content = &content1;

//     t_list *second_node = (t_list *)malloc(sizeof(t_list));
//     int content2 = 43;
//     second_node->content = &content2;

//     t_list *third_node = (t_list *)malloc(sizeof(t_list));
//     int content3 = 44;
//     third_node->content = &content3;

//     // Connect the nodes
//     first_node->next = second_node;
//     second_node->next = third_node;
//     third_node->next = NULL;

//     // Apply the function 'print_int' to each node's content
//     ft_lstiter(first_node, &print_int);

//     return 0;
// }