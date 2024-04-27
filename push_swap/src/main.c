#include "push_swap.h"
static void free_str_array(char **arr) {
    if (arr) {
        int i = 0;
        while (arr[i] != NULL) {
            free(arr[i]);
            i++;
        }
        free(arr);
    }
}

int main(int ac, char **av) 
{
    t_list *stack_a;
    t_list *stack_b;
    int stack_size;
    char **nums = NULL;
    if (ac < 2)
        return 0;
    nums = splited(av);
    // int i = 0;
    // // while(nums[i++])
    // // printf("%s .",nums[i]);
    if (!nums)
        return 1;
    if (!check_valid(nums)) {
        free_str_array(nums);
        exit_error(NULL,NULL);
    }
    stack_b = NULL;
    stack_a = fill_stack(nums);
    // free_str_array(nums);
    if (!stack_a) 
    exit_error(&stack_a,&stack_b);
    stack_size = get_stack_size(stack_a);
    assign_index(stack_a, stack_size);
    //  while (stack_a) {
    //     printf("%d ", stack_a->index); 
    //     stack_a = stack_a->next;
    // }
    push_swap(&stack_a, &stack_b, stack_size);
        while (stack_a) {
        printf("%d ", stack_a->value);
        stack_a = stack_a->next;
    }
    // free_stack(&stack_a);
    // free_stack(&stack_b);
    //      while (stack_a) {
    //     printf("%d ", stack_a->index); 
    //     stack_a = stack_a->next;
    // }
    return 0;
}

