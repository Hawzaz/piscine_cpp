#ifndef ZOMBIE_HPP
 # define ZOMBIE_HPP

#include <iostream>

class Zombie
{
    public:
        std::string name;
        std::string type;
        void announce(void);
};

#endif