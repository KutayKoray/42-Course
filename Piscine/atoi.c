#include <unistd.h>

int ft_atoi(char *str)
{
    int i = 0;
    int total = 0;
    int sign = 1;

    while ((str[i] == ' ' || (str[i] >= 9 && str[i] <= 13)))
    {
        i++;
    }
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (str[i] == '+')
        i++;
    while (str[i] <= '9' && str[i] >= '0')
    {
        total *= 10;
        total += str[i] - '0';
        i++;
    }
    return total * sign;
}
#include <stdlib.h>
#include <stdio.h>
int main(int argc, char **argv)
{
    if (argc == 2)
    {
        printf("%d     ", ft_atoi(argv[1]));
        printf("%d", atoi(argv[1]));
    }
    write(1, "\n", 1);
    
}