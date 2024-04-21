#include "push_swap.h"
int	is_sorted(t_list *stack)
{
	while(stack)
	{
		if(stack->value > stack->next->value)
			return(0);
			stack = stack->next;
	}
	return(1);
}
void push_swap(t_list **stack_a,t_list **stack_b, int stack_size)
{
    if(stack_size == 2 && !is_sorted(*stack_a))
    do_sa((stack_a));
    if(stack_size == 3 && !is_sorted(*stack_a))
    tiny_sort(stack_a);
    if(stack_size > 3 && !is_sorted(*stack_a))
    sort(stack_a,stack_b);

}