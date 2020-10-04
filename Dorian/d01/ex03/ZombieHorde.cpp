#include "Zombie.hpp"
#include "ZombieHorde.hpp"

std::string gen_random(const int len)
{
    
    std::string tmp_s;
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand( (unsigned) time(NULL) );
    
    for (int i = 0; i < len; ++i) 
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    return tmp_s;   
}

ZombieHorde::ZombieHorde(int n) : _n(n)
{
    Zombie* zombies = new Zombie[this->_n];

    std::cout << "Created " << this->_n << " zombies\n";
    this->_zombies = zombies;
}

void ZombieHorde::announce(void)
{
    for (int i = 0; i < this->_n; i++)
    {
        this->_zombies[i].type = "PABLO";
        this->_zombies[i].name = gen_random(i * i);
        this->_zombies[i].announce();
    }
}

ZombieHorde::~ZombieHorde()
{
    delete [] this->_zombies;
}