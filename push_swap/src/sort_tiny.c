#include "push_swap.h"

static int	find_highest_index(t_list *stack)
{
    int index;
    index  = stack->index;
    t_list *tmp = stack;
    while(tmp)
    {
        if(index < tmp->index)
        index = tmp->index;
        tmp = tmp->next;
    }
    return(index);
}
void sort_tiny(t_list **stack)
{
    if(is_sorted(*stack))
    return ;
    int highest;
    highest = find_highest_index(*stack);
    // printf("highest index:%d\n",highest);
    if((*stack)->index == highest)
    do_ra(stack);
    else if((*stack)->next->index == highest)
    do_rra(stack);
    if((*stack)->index > (*stack)->next->index)
    do_sa(stack);
}