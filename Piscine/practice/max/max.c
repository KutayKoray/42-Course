int		max(int* arr, unsigned int len)
{
    int i = 0;
    int max = 0;
     while (i < len)
     {
        if(arr[i] > max)
            max = arr[i];
        i++;
     }
    return max;
}
#include <stdio.h>
int main ()
{
    int arr[] = {1,20,13,42,7};
    printf("%d", max(arr, 5));
}