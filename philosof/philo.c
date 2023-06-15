#include "philo.h"

int main(int ac, char **av)
{
    t_philo *philo;

    if ((ac != 6 && ac != 5) || !check(av))
        return (0);
    philo = linkd_philo(philo, ac, av);
}
