#include "libft.h"
#include <stdlib.h>

// Define the structure for the node
typedef struct s_list {
    void *content;
    struct s_list *next;
} t_list;

// Function to create a new node with the given content
t_list *ft_lstnew(void *content) {
    t_list *node = (t_list *)malloc(sizeof(t_list));
    if (node != NULL) {
        node->content = content;
        node->next = NULL;
    }
    return node;
}

// Function to delete the content of a node
void ft_lstdelone(t_list *lst, void (*del)(void *)) {
    if (lst != NULL && del != NULL) {
        del(lst->content);
        free(lst);
    }
}

// Function to delete and free the entire list
void ft_lstclear(t_list **lst, void (*del)(void *)) {
    if (lst == NULL || *lst == NULL) {
        return;
    }

    t_list *current = *lst;
    t_list *next_node;

    while (current != NULL) {
        next_node = current->next;
        ft_lstdelone(current, del);
        current = next_node;
    }

    *lst = NULL;
}

// Function to create a new list resulting from the successive applications of the function 'f'
t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)) {
    t_list *new_list = NULL;
    t_list *current = lst;

    while (current != NULL) {
        // Apply the function 'f' to the content of the current node
        void *result = f(current->content);

        // Create a new node with the result of the function 'f'
        t_list *new_node = ft_lstnew(result);
        if (new_node == NULL) {
            // If memory allocation fails, delete the already created nodes and return NULL
            ft_lstclear(&new_list, del);
            return NULL;
        }

        // Add the new node to the new list
        ft_lstadd_back(&new_list, new_node);

        // Move to the next node in the original list
        current = current->next;
    }

    return new_list;
}