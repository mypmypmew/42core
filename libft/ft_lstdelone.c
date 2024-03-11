#include "libft.h"
#include <stdlib.h>

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if(lst != NULL)
		if(lst->content != NULL && del != NULL)
			del(lst->content);
	free(lst);
}

int main() {
    // Create a node with content
    t_list *node = (t_list *)malloc(sizeof(t_list));
    int *content = (int *)malloc(sizeof(int));
    *content = 42;
    node->content = content;
    node->next = NULL;
    return 0;
}