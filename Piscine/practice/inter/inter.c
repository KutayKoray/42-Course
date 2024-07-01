#include <unistd.h>

int check_double(char *str, int p)
{
    int i = 0;

    while (i < p)
    {
        if (str[i] == str[p])
            return 0;
        i++;
    }
    return 1;
}

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int i = 0;
        while (av[1][i])
        {
            int j = 0;
            while (av[2][j])
            {
                if (av[1][i] == av[2][j] && check_double(av[1], i) == 1)
                {
                    write(1, &av[1][i], 1);
                    break;
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
}