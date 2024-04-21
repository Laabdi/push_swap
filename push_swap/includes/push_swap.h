#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdio.h>
# include <string.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list{
    void *content;
    int value;
    int index;
    int pos;
    int target_pos;
    int cost_a;
    int cost_b;
    struct s_list *next;
}t_list;


//stack_helpers
char	**ft_split(char const *s, char c);
t_list *fill_stack(int ac, char **str);
void    assign_index(t_list **stack_a, int stack_size);
int     get_stack_size(t_list	*stack);
t_list	*get_stack_before_bottom(t_list *stack);
t_list	*get_stack_bottom(t_list *stack);
void	stack_add_bottom(t_list **stack, t_list *new);
t_list *new_node(int value);
// actions
void	do_sa(t_list **stack_a);
void	do_sb(t_list **stack_b);
void	do_ss(t_list **stack_a, t_list **stack_b);
void	do_ra(t_list **stack_a);
void	do_rb(t_list **stack_b);
void	do_rr(t_list **stack_a, t_list **stack_b);
void    do_rra(t_list **stack);
void    do_rrb(t_list **stack);
void    do_rrr(t_list **stack_a,t_list **stack_b);
void	do_pa(t_list **stack_a, t_list **stack_b);
void	do_pb(t_list **stack_a, t_list **stack_b);
//sorting
int	is_sorted(t_list *stack);
void push_swap(t_list **stack_a,t_list **stack_b, int stack_size);
//error handlers
void    ft_free(char **arr);
void    ft_error_handler(void);
void	free_stack(t_list **stack);
void	exit_error(t_list **stack_a, t_list **stack_b);
//parse
int check_valid(char **s);
int ft_strlen( char *s);
char	*ft_strjoin(char  *s1, char  *s2);
int check_number(char *s1);
int check_duplicates(char **s1);
int ft_is_sign(char nb);
int ft_is_digit(char nb);
int num_cmp(char *s1,char *s2);
char **splited(char **av);

#endif
