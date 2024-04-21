#include "push_swap.h"


static long int	ft_atoi(const char *str)
{
	long int	nb;
	int			isneg;
	int			i;

	nb = 0;
	isneg = 1;
	i = 0;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		isneg *= -1;
		i++;
	}
	while (ft_is_digit(str[i]))
	{
		nb = (nb * 10) + (str[i] - '0');
		i++;
	}
	return (nb * isneg);
}
t_list *fill_stack(int ac, char **str)
{
    int i;
    t_list *stack_a;
    long int num;
    stack_a = NULL;
    i = 0;
    while(i < ac)
    {
        num = ft_atoi(str[i]);
        if((num > INT_MAX )|| (num < INT_MIN))
        exit_error(&stack_a,NULL);
        if(i == 1)
        stack_a = new_node((int)num);
        else
        stack_add_bottom(&stack_a,new_node((int)num));
        i++;
    }
	return(stack_a);
}
void    assign_index(t_list **stack_a, int stack_size)
{
    t_list *highest;
    t_list *ptr;
    int value;
    while(stack_a)
    {
        ptr = *stack_a;
        highest = NULL;
        value = INT_MIN;
        while(--stack_size)
        {
            if(ptr->value == INT_MIN && ptr->index == 0)
                ptr->index = 1;
            if(ptr->value > value && ptr->index == 0)
            {
                value = ptr->value;
                highest = ptr;
                ptr = *stack_a;

            }
            if(highest != NULL)
            {
                highest->index = stack_size;
            }
            ptr= ptr->next;
        }
    }
}