int ft_isalnum(int arg)
{
    if ((arg >= 97 && arg <= 122) || (arg >= 65 && arg <= 90) || (arg >= 48 && arg <= 57))
        return (1);
    else
        return (0);
}
/*
#include    <ctype.h>
#include    <stdio.h>
int main()
{
    printf("%d\n", ft_isalnum('s'));
    printf("%d", isalnum('2'));
}
*/