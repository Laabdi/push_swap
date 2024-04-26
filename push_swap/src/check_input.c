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
static void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*ptr;
	unsigned char		*d;
	size_t				i;

	if (dest == src)
		return (dest);
	i = 0;
	ptr = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (n == 0)
		return (d);
	if (n > 0)
	{
		while (n-- > 0)
		{
			d[i] = ptr[i];
			i++;
		}
		return ((char *)dest);
	}
	return (NULL);
}
char	*ft_strdup(const char *str)
{
	int		n;
	char	*ptr;

	n = ft_strlen((char *)str);
	ptr = (char *)malloc(n + 1);
	if (ptr != NULL)
	{
		ft_memcpy(ptr, str, n);
		ptr[n] = '\0';
		return (ptr);
	}
	return (NULL);
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

char **splited(char **av) {
    char **argv = NULL;
    char *temp = NULL;
    int i = 1;

    if (!av || !av[1])
        return NULL;
    temp = ft_strdup("");
    if (!temp)
        return NULL;
    while (av[i]) {
        char *new_temp = ft_strjoin(temp, av[i]);
        temp = ft_strjoin(new_temp, " ");
        if (!temp)
            return NULL;
        i++;
    }
    argv = ft_split(temp, ' ');
    return argv;
}
