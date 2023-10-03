int ft_isalpha(int arg)
{
    if (arg >= 65 && arg <= 90)
        return (2);
    else if (arg >= 97 && arg <= 122)
        return (1);
    else
        return (0);
}

/*
#include <stdio.h>
int main(int ac, char** av)
{
    printf("%d", ft_isalpha(av[1][0]));
}
*/