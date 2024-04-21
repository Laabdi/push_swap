#include "push_swap.h"

int main(int ac, char **av)
{
    t_list *stack_a;
    t_list *stack_b;
    char **nums;
    int stack_size;
    if(ac == 1 || (ac == 2 && !av[1][0]))
    ft_error_handler();
    if(ac == 2)
    ft_split(av[1], ' ');
    stack_b = NULL;
    nums = splited(av);
    if(check_valid(nums))
    {
        stack_a = fill_stack(ac,nums);
        stack_size = get_stack_size(stack_a);
        assign_index(&stack_a,stack_size);
        push_swap(&stack_a,&stack_b,stack_size);
        free_stack(&stack_a);
        free_stack(&stack_b);
        return(0);
    }
    else
    ft_error_handler();
}