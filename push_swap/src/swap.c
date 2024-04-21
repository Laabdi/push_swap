#include "push_swap.h"

static void	swap(t_list *stack)
{
    int tmp;

    tmp = stack->value;
    stack->value = stack->next->value;
    stack->next->value = tmp;
    tmp = stack->index;
    stack->index = stack->next->index;
    stack->next->index = tmp;
}
void	do_sa(t_list **stack_a)
{
    swap(*stack_a);
    printf("sa\n");
}

void	do_sb(t_list **stack_b)
{
    swap(*stack_b);
    printf("sb\n");
}

void	do_ss(t_list **stack_a, t_list **stack_b)
{
    swap(*stack_a);
    swap(*stack_b);
    printf("ss\n");
}