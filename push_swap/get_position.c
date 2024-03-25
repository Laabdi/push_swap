#include "libft.h"

static void	get_position(t_list **stack)
{
    t_list *tmp;
    tmp = *stack;
    int i;
    i = 0;
    while(tmp)
    {
        tmp->pos = i;
        tmp = tmp->next;
        i++;
    }
}
int get_lowest_index_pos(t_list **stack)
{
    t_list *tmp;
    int lowest_index;
    int lowest_pos;
    tmp = *stack;
    get_position(stack);
    lowest_index = INT_MAX;
    lowest_pos = tmp->pos;
    while(tmp)
    {
        if(tmp->index < lowest_index)
        {
            lowest_index = tmp->index;
            
        }
        tmp = tmp->next;
    }
    return(lowest_pos);
}