#include "ZombieEvent.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <ctime>
#include <unistd.h>

std::string gen_random(const int len)
{
    
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand( (unsigned) time(NULL) * getpid());
    
    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s;   
}

int main(int ac, char **av)
{
    int             round;
    ZombieEvent*    event;

    round = ac < 2 ? 5 : std::stoi(av[1]);
    std::cout << round << "of zombies starting." << std::endl;
    event = new ZombieEvent();
    for (int i = 0; i < round; i++)
    {
        if (i < 3)
        {
            std::cout << "Wave" << i + 1 << "is starting.." << std::endl;
            event->setZombieType("Stack");
            event->randomChump(gen_random(16));
        }
        else
        {
            std::cout << "Wave" << i + 1 << " is starting.." << std::endl;   
            event->setZombieType("Heap");
            Zombie  *zombies[i * i];
            for (int j = 0; j < i * i; j++)
            {
                zombies[j] = event->newZombie(gen_random(j + i));
                zombies[j]->announce();
                delete zombies[j];
            }
        }
        
    }
    delete event;
    return (0);
}