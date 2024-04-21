#include "push_swap.h"

void ft_error_handler(void)
{
    printf("error");
    exit(1);
}
void	free_stack(t_list **stack)
{
    t_list *tmp;
    if(!stack || !*stack)
    return;
    while(*stack)
    {
        tmp = (*stack)->next;
        free(stack);
        *stack = tmp;
    }
    *stack = NULL;
}

void	exit_error(t_list **stack_a, t_list **stack_b)
{
    if(!stack_a || !*stack_a)
        free_stack(stack_a);
    if(!stack_b || !*stack_b)
        free_stack(stack_b);
    write(1,"error",6);
    exit(1);
}

void ft_free(char **arr)
{
    int i;
    i = 0;
    while(arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}