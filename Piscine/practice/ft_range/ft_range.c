#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max)
{
    int *range;
    int i = 0;

    range = (int *)malloc(sizeof(int) * (max - min));

    while (min < max)
    {
        range[i] = min;
        min++;
        i++;
    }
    return range;
}

int main ()
{   
    for(int i = 0 ; i < 10 ; i++)
    {
        printf("%d", ft_range(0, 10)[i]);
    }
}