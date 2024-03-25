#include "libft.h"

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
