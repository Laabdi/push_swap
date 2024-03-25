#include "libft.h"

int main(int ac, char **av)
{
    t_list stack_a;
    t_list stack_b;
    if(ac == 1 || (ac == 2 && !av[1][0]))
    ft_error_handler();
    if(ac == 2)
    ft_split(av[1], ' ');
}