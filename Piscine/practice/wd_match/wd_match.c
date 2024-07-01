#include <unistd.h>

int main (int ac, char **av)
{
    if (ac == 3)
    {
        int count = 0;
        int check_count = 0;
        int i = 0;
        int j = 0;
        while (av[1][count])
            count++;

        while (av[1][i])
        {
            while (av[2][j])
            {
                if (av[1][i] == av[2][j])
                {
                    check_count++;
                    break;
                }
                j++;
            }
            i++;
        }
        if (check_count == count)
            write(1, av[1], count)  ;
    }
    write(1, "\n", 1);
}