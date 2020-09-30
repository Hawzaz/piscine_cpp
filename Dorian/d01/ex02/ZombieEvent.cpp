#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type)
{
    this->type = type;
}

void ZombieEvent::randomChump(std::string name)
{
    Zombie      z;

    z.type = this->type;
    z.name = name;
    z.announce();
}

Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie*     z;

    z = new Zombie();
    z->type = type;
    z->name = name;
    return (z);
}