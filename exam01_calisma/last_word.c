#include <stdio.h>

char	*ft_last_word(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
    i -= 1;
	while (str[i] == '\t' || str[i] == ' ')
		i--;
	while (i >= 0)
	{
		if (str[i] == '\t' || str[i] == ' ')
			break ;
		i--;
	}
    i += 1;
	return (&str[i]);
}

int	main(int argc, char **argv)
{

	printf("%s", ft_last_word(argv[1]));

	printf("\n");
}