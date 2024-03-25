#include "libft.h"
typedef struct s_list{
    void *content;
    struct s_list *next;
}t_list;
int count_nodes(t_list *lst)
{
    int count = 0;
    t_list *ptr;
    ptr = lst;
    while(ptr != NULL)
    {
        count++;
        ptr = lst->next;
    }
    return(count);
}