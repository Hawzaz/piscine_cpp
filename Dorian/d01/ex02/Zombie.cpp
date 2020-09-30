#include "Zombie.hpp"

void Zombie::announce(void)
{
    std::cout << "<" << this->name << "(" << this->type << ")>" << "Brrrrrrrrrrr" << std::endl;
}