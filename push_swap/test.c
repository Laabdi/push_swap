
// #include <stdio.h>
// #include "libft.h"
// // int num_cmp(char *s1,char *s2)
// // {
// //     int i = 0;
// //     int j = i;
// //     if(s1[i] == '+')
// //     {
// //         if(s2[j] != '+')
// //         i++;
// //     }
// //     else
// //         if(s2[j] == '+')
// //             j++;
// //     if(s1[i] && s2[j] && s1[i] == s2[j])
// //     {
// //         i++;
// //         j++;
// //     }
// //     return((unsigned char)s1[i] - (unsigned char) s2[j]);
// // }

// // int check_duplicates(char **s1)
// // {
// // 	int i = 1;
// // 	int j;
// // 	while(s1[i])
// // 	{
// // 		j = 1;
// //         while(s1[j])
// //         {
// //             if (j != i && num_cmp(s1[i],s1[j]) == 0)
// //             return(1);
// //             j++;
// //         }
// //         i++;
// // 	}
// //     return(0);
// // }
// int ft_is_sign(char nb)
// {
//     if (nb == '-' || nb == '+')
//     return(1);
// else
//     return (0);
// }
// int ft_is_digit(char nb)
// {
//     if (nb >= '0' && nb <= '9')
//     return(1);
// else
// return(0);
// }
// int check_number(char *s1)
// {
//     int i = 0;
//         if (ft_is_sign(s1[i]) == 1 && s1[i + 1] != '\0')
//         i++;
//     while(s1)
//     {
//         if (s1[i] && ft_is_digit(s1[i]) == 1)
//         i++;
//     if(s1[i] != '\0' && !ft_is_digit(s1[i]))
//         return(0);
//     return(1);
//     }
// }
// int main()
// {
//     char *s = "-62";
//     if(check_number(s) == 1)
//         printf("nice");
//     else
//     printf("not nice");
//     }