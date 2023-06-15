#include "philo.h"

int check(char **av)
{
    int i;
    int j;

    i = 0;
    while (av[++i])
    {
        j = -1;
        while (av[i][++j])
        {
            if ((av[i][j] <= '0' || av[i][j] >= '9') &&
                av[i][j] != '+' && av[i][j] != '-')
            {
                printf("\033[0;31mInvalid Arguments\n");
                exit(1);
            }
        }
    }
    return (1);
}