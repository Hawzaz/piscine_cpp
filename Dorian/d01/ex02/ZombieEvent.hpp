#ifndef ZOMBIE_EVENT_HPP
 # define ZOMBIE_EVENT_HPP

#include <iostream>
#include "Zombie.hpp"

class ZombieEvent
{
    public:
        std::string type;
        void setZombieType(std::string type);
        Zombie* newZombie(std::string name);
        void randomChump(std::string name);

};

#endif