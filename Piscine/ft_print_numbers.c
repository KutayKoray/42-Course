/*-------header------*/

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	f;

	f = 0;
	while(f<10)
	{
		write(1, &f, 4);
		f++;
	}
}

int main()
{
	ft_print_numbers();
	return(0);
}
