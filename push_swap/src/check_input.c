#include "push_swap.h"
int ft_strlen( char *s)
{
	int i = 0;
	while(s[i])
	{
		i++;
	}
	return(i);
}
int	arg_is_zero(char *av)
{
	int	i;

	i = 0;
	if (ft_is_sign(av[i]))
		i++;
	while (av[i] && av[i] == '0')
		i++;
	if (av[i] != '\0')
		return (0);
	return (1);
}
int check_number(char *s1)
{
    int i = 0;
        if (ft_is_sign(s1[i]) == 1 && s1[i + 1] != '\0')
        i++;
    while(s1[i] && ft_is_digit(s1[i]) == 1)
        i++;
    if(s1[i] != '\0' && !ft_is_digit(s1[i]))
        return(0);
    return(1);
}

// int check_space(char **s)
// {
//     int i;
//     int j;
//     i = 0;
//     while(s[i])
//     {
//         j = 0;
// 		while(s[i][j])
// 		{
//         if(s[i][j] != 32)
//             break;
// 			j++;
// 		}
// 		if(s[i][j]
// 	i++;
//     }
//     if(!s[i])
//         return 1;
	
// }

int check_duplicates(char **s1)
{
	int i = 0;
	int j;

	while(s1[i])
	{
		j = 0;
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
    int  i = 0;
	int zero;
	zero = 0;
    while(s[i])
    {
        if(!check_number(s[i]))
        return(0);
		zero += arg_is_zero(s[i]);
    i++;
    }
	if(zero > 1)
		return (0);
    if(check_duplicates(s))
    return(0);
return(1);
}

char **splited(char **av)
{
	char **argv;
	char *temp;
	int i;
	i = 1;
	while(av[i])
	{
			temp = ft_strjoin(temp, av[i]);
			temp = ft_strjoin(temp," ");
		i++;
	}
	argv = ft_split(temp,' ');
	return(argv);
}