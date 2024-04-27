#include "push_swap.h"

static void	push(t_list **src, t_list **dest)
{
    t_list *tmp;
    if(*src == NULL)
    return;
    tmp = (*src)->next;
    (*src)->next = *dest;
    *dest = *src;
    *src = tmp;

}
void	do_pa(t_list **stack_a, t_list **stack_b)
{
    push(stack_b, stack_a);
    printf("pa\n");
}

void	do_pb(t_list **stack_a, t_list **stack_b)
{
    push(stack_a, stack_b);
    printf("pb\n");
}