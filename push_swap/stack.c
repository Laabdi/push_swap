#include "libft.h"

// Get stack last element

t_List	*get_stack_bottom(t_list *stack)
{
    while(stack && stack->next != NULL)
    {
        t_list = t_list->next;
    }
    return(stack);
}
// /* get_stack_before_bottom:
// *	Returns the second to last element of the stack.

t_list	*get_stack_before_bottom(t_list *stack)
{
    while(stack && stack->next && stack->next->next != NULL)
    stack = stack->next;
return(stack);
}
// Gettin size of the stack
int	get_stack_size(t_list	*stack)
{
    int size = 0;
    while(stack->next == NULL)
    {
        size++;
        stack = stack->next;
    }
    return(size);
}