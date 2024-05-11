/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   while.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/02 12:09:23 by moaregra          #+#    #+#             */
/*   Updated: 2024/05/09 15:32:46 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void    KO_handler(void)
{
    write(1, "KO", 2);
    exit(1);
}
void    OK_handler(void)
{
    write(1, "OK", 2);
    exit(1);
}
int ft_is_sorted(t_list **stack)
{
    t_list *tmp;
    tmp = *stack;
    while(tmp)
    {
        if(tmp->value < tmp->next->value)
        return 1;
        tmp = tmp->next;
    }
    return 0;
}
// void ft_loop(void)
// {
//     while(1)
//     {
//         char *s = get_next_line(0);
//         if(s == NULL)
//             break ;
    
//     }
// }