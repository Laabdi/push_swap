#include "libft.h"

// Get stack last element

t_list	*get_stack_bottom(t_list *stack)
{
    while(stack && stack->next != NULL)
    {
        stack = stack->next;
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
void	stack_add_bottom(t_list **stack, t_list *new)
{
    t_list *tail;
	if(!new)
	return;
    if(!*stack)
	{
		*stack = new;
		return;
	}
    tail = get_stack_bottom(*stack);
	tail->next = new;
}

t_list *new_node(t_list *stack)
{
    t_list *new;
    new = malloc(sizeof(new));
    if(!new)
    return (NULL);
    new->index = 0;
    new->value =-1;
    new->cost_a =-1;
    new->cost_b =-1;
    new->target_pos =-1;
    new->next = NULL;
    return (new);
}

