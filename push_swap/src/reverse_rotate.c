#include "push_swap.h"

static void	rev_rotate(t_list **stack)
{
    t_list *tail;
    t_list *before_tail;
    t_list *tmp;
    tail = get_stack_bottom(*stack);
    before_tail = get_stack_before_bottom(*stack);
    tmp = *stack;
    *stack = tail;
    (*stack)->next = tmp;
    before_tail->next = NULL;
}
void do_rra(t_list **stack)
{
    rev_rotate(stack);
    printf("rra");
}
void do_rrb(t_list **stack)
{
    rev_rotate(stack);
    printf("rrb");
}
void do_rrr(t_list **stack_a,t_list **stack_b)
{
    rev_rotate(stack_a);
    rev_rotate(stack_b);
    printf("rrr");
}