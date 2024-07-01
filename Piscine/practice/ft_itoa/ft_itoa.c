#include <stdlib.h>
#include <stdio.h>

int ft_nbrlen(int nbr)
{
    int len = 0;
    if (nbr < 0)
    {
        nbr *= -1;
        len++;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int nbr)
{
    int i = 0;
    int len = ft_nbrlen(nbr);
    char *str;
    str = (char *)malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return 0;
    str[len] = '\0';
    len--;
    if (nbr == 0)
    {   
        str[0] = 48;
        return str;
    }
    while (nbr < 0)
    {
        str[0] = '-';
        nbr *= -1;
    }
    while (nbr > 0)
    {
        str[len] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return str;
}

int main ()
{
    printf("%s\n", ft_itoa(-123));
}