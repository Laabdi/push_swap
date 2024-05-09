/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reading.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:09:20 by moaregra          #+#    #+#             */
/*   Updated: 2024/05/09 16:54:49 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int ft_strncmp(char *s1,char *s2,int n)
{
	int  i = 0;
	while(i < n)
	{
		if(s1[i] == s2[i])
		i++;
	}
	return(s1[i] - s2[i]);
}

void read_execution(t_list **stack_a,t_list **stack_b,char *str)
{
	if(ft_strncmp(str,"pb\n",3))
		do_pb_bonus(stack_a,stack_b);
	else if(ft_strncmp(str,"pa\n",3))
		do_pa_bonus(stack_a,stack_b);
	else if(ft_strncmp(str,"rb\n",3))
		do_rb_bonus(stack_b);
	else if(ft_strncmp(str,"ra\n",3))
		do_ra(stack_a);
	else if(ft_strncmp(str,"rr\n",3))
		do_rr_bonus(stack_a,stack_b);
	else if(ft_strncmp(str,"rra\n",4))
		do_rra_bonus(stack_a);
	else if(ft_strncmp(str,"rra\n",4))
		do_rra_bonus(stack_a);
	else if(ft_strncmp(str,"rrr\n",4))
		do_rrr_bonus(stack_a, stack_b);
	else if(ft_strncmp(str,"sa\n",3))
		do_sa_bonus(stack_a);
	else if(ft_strncmp(str,"sb\n",3))
		do_sb_bonus(stack_b);
	else if(ft_strncmp(str,"sa\n",3))
		do_sa_bonus(stack_a,stack_b);
}