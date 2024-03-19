#include "libft.h"

int check_number(char *s1)
{
    int i = 0;
        if (ft_is_sign(s1[i]) == 1 && s1[i + 1] != '\0')
        i++;
    while(s1)
    {
        if (s1[i] && ft_is_digit(s1[i]) == 1)
        i++;
    if(s1[i] != '\0' && !ft_is_digit(s1[i]))
        return(0);
    return(1);
    }
}

int check_duplicates(char **s1)
{
	int i = 1;
	int j;

	while(s1[i])
	{
		j = 1;
        while(s1[j])
        {
            if (j != i && num_cmp(s1[i],s1[j]) == 0)
            return(1);
            j++;
        }
        i++;
	}
    return(0);
}

int check_valid(char **s)
{
    int  i = 1;
    while(s[i])
    {
        if(check_number(s[i]) == 0)
        return(0);
    i++;
    }
    if(check_duplicates(s) == 1)
    return(0);
return(1);
}

int main(int ac, char **av)
{
    char *s[] = {"7", "-4242", "7777", NULL};
    if(check_valid(s) == 0)
    printf("nice\n");
else
    printf("not nice\n");
}