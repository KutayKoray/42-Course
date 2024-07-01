void	ft_swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

#include <stdio.h>
int main ()
{
	int nbr = 0;
	int nbr2 = 5;
	printf("sayi1 = %d,sayi2 = %d\n", nbr, nbr2);
	ft_swap(&nbr, &nbr2);
	printf("sayi1 = %d,sayi2 = %d\n", nbr, nbr2);
}
