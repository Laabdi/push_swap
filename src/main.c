/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moaregra <moaregra@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 10:52:22 by moaregra          #+#    #+#             */
/*   Updated: 2024/05/05 18:23:20 by moaregra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static void	free_str_array(char **arr)
{
	int	i;

	if (arr)
	{
		i = 0;
		while (arr[i] != NULL)
		{
			free(arr[i]);
			i++;
		}
		free(arr);
	}
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		stack_size;
	char	**nums;

	if (ac < 2)
		return (0);
	nums = splited(av);
	if (!nums)
		return (1);
	if (!check_valid(nums))
	{
		free_str_array(nums);
		exit_error(NULL, NULL);
	}
	stack_b = NULL;
	stack_a = fill_stack(nums);
	stack_size = get_stack_size(stack_a);
	assign_index(stack_a, stack_size + 1);
	push_swap(&stack_a, &stack_b, stack_size);
	free_stack(stack_a);
	if (stack_b != NULL)
		free(stack_b);
	free_str_array(nums);
	return (0);
}
