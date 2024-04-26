#include "push_swap.h"
int ft_is_sign(char nb)
{
    if (nb == '-' || nb == '+')
    return(1);
else
    return (0);
}
int ft_is_digit(char nb)
{
    if (nb >= '0' && nb <= '9')
    return(1);
else
return(0);
}

int num_cmp(char *s1,char *s2)
{
    int i = 0;
    int j = 0;

    if(s1[i] == '+') 
    {
        if(s2[j] != '+')
        i++;
    }
    else
        if(s2[j] == '+')
            j++;
    while(s1[i] && s2[j] && s1[i] == s2[j])
    {
        i++;
        j++;
    }
    return((unsigned char)s1[i] - (unsigned char) s2[j]);
}
int ft_abs(int nb)
{
    if(nb < 0)
    return(nb * -1);
    return(nb);   
}

// int main ()
// {
//     if (!num_cmp("1234", "+1234"))
//         printf ("not nice");
//     else 
//         printf ("nice");
// }