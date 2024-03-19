#include "libft.h"

static void	rotate(t_list **stack)
{
    t_List tmp;
    t_list last;
    tmp = *stack;
    *stack = (*stack)->next;
    last = get_stack_bottom(stack);
    tmp->next  = NULL;
    last->next = tmp;
}
void	do_ra(t_list **stack_a)
{
    rotate(stack_a)
    printf("ra\n");
}
void	do_rb(t_stack **stack_b)
{
    rotate(stack_b)
    printf("rb\n");
}
void	do_rr(t_stack **stack_a, t_stack **stack_b)
{
    rotate(stack_a);
    rotate(stack_b);
    printf("rr\n");
}