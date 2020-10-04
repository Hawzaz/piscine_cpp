#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <unistd.h>

int main(int ac, char **av)
{

    ZombieHorde     *horde;

    horde = new ZombieHorde(5);

    horde->announce();

    delete horde;
    return (0);
}