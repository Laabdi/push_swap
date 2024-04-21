#include "push_swap.h"

static int	find_highest_index(t_list *stack)
{
    int index;
    index  = stack->index;
    while(stack)
    {
        if(index > stack->index)
        index = stack->index;
        stack = stack->next;
    }
    return(index);
}
void sort_tiny(t_list **stack)
{
    if(is_sorted(*stack))
    return ;
    int highest;
    highest = find_highest_index(*stack);
    if((*stack)->index == highest)
    do_ra(stack);
    else if((*stack)->next->index == highest)
    do_rra(stack);
    if((*stack)->index > (*stack)->next->index)
    do_sa(stack);
}