#include <unistd.h>
int main (int ac, char **av)
{
    if(ac == 2)
    {
        int i;

        i = 0;
        while (av[1][i])
        {
            char count_letter = av[1][i];
            if (av[1][i] >= 'a' && av[1][i] <= 'z')
            {   
                while(count_letter >= 'a')
                {
                    write(1, &av[1][i], 1);
                    count_letter--;
                }
            }
            else if (av[1][i] >= 'A' && av[1][i] <= 'Z')
            {   
                while(count_letter >= 'A')
                {
                    write(1, &av[1][i], 1);
                    count_letter--;
                }
            }
            else 
            {
                write(1, &av[1][i], 1);
            }
            i++;
        }
    }
    write(1, "\n", 1);
}