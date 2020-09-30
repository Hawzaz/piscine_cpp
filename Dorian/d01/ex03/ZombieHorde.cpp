#include "Zombie.hpp"
#include "ZombieHorde.hpp"


ZombieHorde::ZombieHorde(int n) : _n(n)
{
    Zombie* zombies = new Zombie[this->_n];

    this->_zombies = zombies;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_n; i++)
        this->_zombies[i].announce();
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombies;
}