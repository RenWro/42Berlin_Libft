#include "libft.h"
#include <stdio.h> // For output during testing

// Helper function for ft_lstiter
void lstiter_helper(void *content)
{
    printf("%s ", (char *)content);
}

// Helper function for ft_lstmap
void *lstmap_helper(void *content)
{
    return ft_strdup((char *)content); // Duplicate the content
}

int main(void)
{
    // Testing ft_lstnew
    t_list *node = ft_lstnew(ft_strdup("First node")); // Allocate memory for content
    if (node)
        printf("ft_lstnew: %s\n", (char *)node->content);

    // Testing ft_lstadd_front
    t_list *second_node = ft_lstnew(ft_strdup("Second node")); // Allocate memory for content
    ft_lstadd_front(&node, second_node);
    printf("ft_lstadd_front: %s\n", (char *)node->content);

    // Testing ft_lstsize
    printf("ft_lstsize: %d\n", ft_lstsize(node));

    // Testing ft_lstlast
    t_list *last = ft_lstlast(node);
    printf("ft_lstlast: %s\n", (char *)last->content);

    // Testing ft_lstadd_back
    t_list *third_node = ft_lstnew(ft_strdup("Third node")); // Allocate memory for content
    ft_lstadd_back(&node, third_node);
    printf("ft_lstadd_back: %s\n", (char *)ft_lstlast(node)->content);

    // Testing ft_lstiter
    printf("ft_lstiter: ");
    ft_lstiter(node, lstiter_helper);
    printf("\n");

    // Testing ft_lstmap
    t_list *mapped_list = ft_lstmap(node, lstmap_helper, free);
    printf("ft_lstmap: ");
    ft_lstiter(mapped_list, lstiter_helper);
    printf("\n");

    // Clean up memory
    ft_lstclear(&node, free);
    ft_lstclear(&mapped_list, free);

    return (0);
}
