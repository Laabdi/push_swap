#include "push_swap.h"

static void	rotate(t_list **stack)
{
    t_list *tmp;
    t_list *last;
    tmp = *stack;
    *stack = (*stack)->next;
    last = get_stack_bottom(*stack);
    tmp->next  = NULL;
    last->next = tmp;
}
void	do_ra(t_list **stack_a)
{
    if(!(*stack_a) || !((*stack_a)->next))
            return;
    rotate(stack_a);
    printf("ra\n");
}
void	do_rb(t_list **stack_b)
{
    if(!(*stack_b) || !((*stack_b)->next))
            return;
    rotate(stack_b);
    printf("rb\n");
}
void	do_rr(t_list **stack_a, t_list **stack_b)
{
    if((!(*stack_a) || !((*stack_a)->next)) && (!(*stack_b) || !((*stack_b)->next)))
            return;
    rotate(stack_a);
    rotate(stack_b);
    printf("rr\n");
}