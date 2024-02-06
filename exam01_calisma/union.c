#include <unistd.h>

int	check_double(char *str, char a, int n)
{
	int	i;
	int	dup;

	i = 0;
	dup = 1;
	while (i < n)
	{
        if (str[i] == a)
            return (0);
        i++;
	}
	return (1);
}

int check_double2(char *str, char a)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] == a)
            return 0;
        i++;
    }
    return 1;
}

void    ft_union(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (check_double(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
        i++;
	}
    i = 0;
    while (s2[i])
    {
        if (check_double2(s1, s2[i]) == 1)
        {
            if (check_double(s2, s2[i], i) == 1)
                write(1, &s2[i], 1);
        }
        i++;
    }
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
}
