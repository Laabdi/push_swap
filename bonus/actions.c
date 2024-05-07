/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   actions.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:09:10 by moaregra          #+#    #+#             */
/*   Updated: 2024/05/05 18:23:53 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	do_rotate(t_list **stack)
{
	t_list	*tmp;
	t_list	*last;

	tmp = *stack;
	*stack = (*stack)->next;
	last = get_stack_bottom(*stack);
	tmp->next = NULL;
	last->next = tmp;
}

void	do_ra_bonus(t_list **stack_a)
{
	if (!(*stack_a) || !((*stack_a)->next))
		return ;
	do_rotate(stack_a);
	printf("ra\n");
}

void	do_rb_bonus(t_list **stack_b)
{
	if (!(*stack_b) || !((*stack_b)->next))
		return ;
	do_rotate(stack_b);
	printf("rb\n");
}

void	do_rr_bonus(t_list **stack_a, t_list **stack_b)
{
	if ((!(*stack_a) || !((*stack_a)->next)) && (!(*stack_b)
			|| !((*stack_b)->next)))
		return ;
	do_rotate(stack_a);
	do_rotate(stack_b);
	printf("rr\n");
}
static void	do_rev_rotate(t_list **stack)
{
	t_list	*tail;
	t_list	*before_tail;
	t_list	*tmp;

	tail = get_stack_bottom(*stack);
	before_tail = get_stack_before_bottom(*stack);
	tmp = *stack;
	*stack = tail;
	(*stack)->next = tmp;
	before_tail->next = NULL;
}

void	do_rra_bonus(t_list **stack)
{
	do_rev_rotate(stack);
	printf("rra\n");
}

void	do_rrb(t_list **stack)
{
	do_rev_rotate(stack);
	printf("rrb\n");
}

void	do_rrr(t_list **stack_a, t_list **stack_b)
{
	do_rev_rotate(stack_a);
	do_rev_rotate(stack_b);
	printf("rrr\n");
}