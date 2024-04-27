#include "push_swap.h"
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
            lowest_pos = tmp->pos;
        }
        tmp = tmp->next;
    }
    return(lowest_pos);
}

/* get_target:
*	Picks the best target position in stack A for the given index of
*	an element in stack B. First checks if the index of the B element can
*	be placed somewhere in between elements in stack A, by checking whether
*	there is an element in stack A with a bigger index. If not, it finds the
*	element with the smallest index in A and assigns that as the target position.
*	--- Example:
*		target_pos starts at INT_MAX
*		B index: 3
*		A contains indexes: 9 4 2 1 0
*		9 > 3 && 9 < INT_MAX 	: target_pos updated to 9
*		4 > 3 && 4 < 9 			: target pos updated to 4
*		2 < 3 && 2 < 4			: no update!
*	So target_pos needs to be the position of index 4, since it is
*	the closest index.
*	--- Example:
*		target_pos starts at INT_MAX
*		B index: 20
*		A contains indexes: 16 4 3
*		16 < 20					: no update! target_pos = INT_MAX
*		4  < 20					: no update! target_pos = INT_MAX
*		3  < 20					: no update! target_pos = INT_MAX
*	... target_pos stays at INT MAX, need to switch strategies.
*		16 < 20					: target_pos updated to 20
*		4  < 20					: target_pos updated to 4
*		3  < 20					: target_pos updated to 3
*	So target_pos needs to be the position of index 3, since that is
*	the "end" of the stack.*/
static int	get_target(t_list **stack_a, int b_index, int target_index, int target_pos)
{
    t_list *tmp_a;
    tmp_a = *stack_a;
    while(tmp_a)
    {
        if(tmp_a->index > b_index && tmp_a->index < target_index)
        {
            target_index = tmp_a->index;
            target_pos = tmp_a->pos;
        }
        tmp_a = tmp_a->next;
    }
    if(target_index != INT_MAX)
    return(target_pos);
    tmp_a = *stack_a;
    while(tmp_a)
    {
        if(tmp_a->index < target_index)
        {
            target_index = tmp_a->index;
            target_pos = tmp_a->pos;
        }
        tmp_a = tmp_a->next;
    }
    return(target_pos);
}
void target_pos(t_list **stack_a,t_list **stack_b)
{
    t_list *tmp_b;
    int target_pos;

    target_pos = 0;
    tmp_b = *stack_b;
    get_position(stack_a);
    get_position(stack_b);
    while(tmp_b)
    {
       target_pos =  get_target(stack_a,tmp_b->index,INT_MAX,target_pos);
       tmp_b->target_pos = target_pos;
       tmp_b = tmp_b->next;
    }
}