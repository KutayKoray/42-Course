#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *str)
{
    int total;
	int	sign;
	int	i;

    total = 0;
	sign = 1;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (str[i] >= '0' && str[i] <= '9')
	{
        total *= 10;
        total += str[i] - '0';
        i++;
	}

    return total * sign;
}

int	main(void)
{
	printf("%d\n", atoi("    42test"));
	printf("%d", ft_atoi("   42test"));
}