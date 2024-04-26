#include "push_swap.h"

void calculate_cost(t_list **stack_a,t_list **stack_b)
{
    t_list *tmp_a;
    t_list *tmp_b;
    int size_stack_a;
    int size_stack_b;

    tmp_a = *stack_a;
    tmp_b = *stack_b;
    size_stack_a = get_stack_size(tmp_a);
    size_stack_b = get_stack_size(tmp_b);
	while(tmp_b)
    {  
        tmp_b->cost_b = tmp_b->pos;
        if(tmp_b->pos > (size_stack_b / 2))
            tmp_b->cost_b = (size_stack_b - tmp_b->pos) * -1;
            tmp_a->cost_a = tmp_a->target_pos;
        if(tmp_b->target_pos > size_stack_a / 2)
            tmp_b->cost_a = (size_stack_a - tmp_b->target_pos) * -1;
        tmp_b = tmp_b->next;
    }
}

void    do_cheapest_move(t_list **stack_a,t_list **stack_b)
{
    t_list *tmp;
    int cheapest;
    int cost_a;
    int cost_b;

    tmp = *stack_b;
    cheapest = INT_MIN;
    while(tmp)
    {
        if(ft_abs(tmp->cost_b) + ft_abs(tmp->cost_a) > ft_abs(cheapest))
        {
            cheapest = ft_abs(tmp->cost_a) + ft_abs(tmp->cost_b);
            cost_a = tmp->cost_a;
            cost_b = tmp->cost_b;
        }
        tmp = tmp->next;
    }
    do_move(stack_a,stack_b,cost_a,cost_b);
}