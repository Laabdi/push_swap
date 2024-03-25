#ifndef LIBFT_H
# define LIBFT_H

# include <limits.h>
# include <stdio.h>
# include <string.h>
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
t_list *ft_lstnew(void *content);
int check_number(char *s1);
int check_duplicates(char **s1);
int check_valid(char **s);
int ft_is_sign(char nb);
int ft_is_digit(char nb);
int num_cmp(char *s1,char *s2);
#endif
