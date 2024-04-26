#include "push_swap.h"

t_list	*get_stack_bottom(t_list *stack)
{
    while(stack && stack->next != NULL)
    {
        stack = stack->next;
    }
    return(stack);
}


t_list	*get_stack_before_bottom(t_list *stack)
{
    while(stack && stack->next && stack->next->next != NULL)
    stack = stack->next;
return(stack);
}

int	get_stack_size(t_list *stack_a)
{
	int		i;
	t_list	*tmp;

	tmp = stack_a;
	i = 0;
	while (tmp)
	{
		tmp = tmp->next;
		i++;
	}
	return (i);
}
void	stack_add_bottom(t_list **stack, t_list *new)
{
    t_list *tail;
	if(!new)
	return;
    if(!*stack)
	{
		*stack = new;
		return;
	}
    tail = get_stack_bottom(*stack);
	tail->next = new;
}

t_list *new_node(int value)
{
    t_list *new;
    new = malloc(sizeof(t_list));
    if(!new)
    return (NULL);
    new->index = 0;
    new->value =value;
    new->cost_a =-1;
    new->cost_b =-1;
    new->target_pos =-1;
    new->pos = -1;
    new->next = NULL;
    return (new);
}

