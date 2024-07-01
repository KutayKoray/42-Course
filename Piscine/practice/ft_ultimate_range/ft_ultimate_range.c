#include <stdio.h>
#include <stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
    int i = 0;

    if (min > max)
    {
        *range = NULL;
        return 0;
    }
    *range = (int *)malloc(sizeof(int) * (max - min));
    if (*range == NULL)
    {
        return -1;
    }
    while (min < max)
    {
        (*range)[i] = min;
        min++;
        i++;
    }
    return i;
}

int main ()
{
    int *range;

    printf("%d\n", ft_ultimate_range(&range, 0, 10));
    for (int i = 0 ; i < 10 ; i++)
    {
        printf("%d", range[i]);
    }
}